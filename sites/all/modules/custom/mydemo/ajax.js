(function ($) {
    Drupal.behaviors.ajax_example = {
        attach:function (context) {
            $("#demo-ajax-link").click (function() {
                $.ajax({
                    url: 'mydemo/ajax',
                    success: function(data) {
					    alert('success');
                        console.log(data);						
                    }
                });
            });
        }
    }
})(jQuery);