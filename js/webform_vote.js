/**
 * @file
 *
 * Vote JavaScript behaviors integration.
 */

(function($){ 
    Drupal.behaviors.vote = {
      attach: function (context) {
        //$('.rating-css-star select.form-select').barrating({
        $('select.rating-css-star-vote').barrating({
            theme: 'css-stars',
            showSelectedRating: true
        });  
      },
    };
})(jQuery);