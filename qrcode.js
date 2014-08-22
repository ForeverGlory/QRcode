(function($) {
    Drupal.behaviors.qrcode = {
        attach: function(context, settings) {
            $(".block-qrcode", context).each(function() {
                var $block = $(this);
                $("img", $block).attr("src", Drupal.settings.basePath + "qrcode?chl=" + Drupal.encodePath(location.href));
            });
        }
    };
})(jQuery);

