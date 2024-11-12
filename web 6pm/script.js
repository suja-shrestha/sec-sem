$(document).ready(function() {
    $("#menu li a").click(function() {
        $("#menu li a").removeClass("visible");
        $(this).addClass("visible");
        $(".bio").removeClass("active");
        $("#" + $(this).attr("data-tab")).addClass("active");
    });
});
