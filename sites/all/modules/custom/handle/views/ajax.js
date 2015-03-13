(function ($) {
    Drupal.behaviors.ajax_example = {
        attach:function (context) {
            $(".form-submit").click (function() {
                $.ajax({
                    url: 'ajax/handle/path',
                    success: function(data) {
					    alert('I success');
                        console.log(data)
                    }
                });
            });
        }
    }
})(jQuery);