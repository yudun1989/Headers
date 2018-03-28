//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

@class NSArray, NSDictionary, NSNumber, NSString, TTADModelStructModel, TTImageListStructModel, TTMediaInfoStructModel, TTUserInfoStructModel, TTVideoDetailInfoStructModel;
@protocol Optional, TTActionStructModel><Optional, TTFilterWordsStructModel><Optional, TTImageListStructModel><Optional;

@interface TTFeedItemContentStructModel : JSONModel
{
    NSString<Optional> *_message;
    NSNumber<Optional> *_read_count;
    NSString<Optional> *_video_id;
    NSString<Optional> *_media_name;
    NSNumber<Optional> *_ban_comment;
    TTImageListStructModel<Optional> *_middle_image;
    NSArray<TTImageListStructModel><Optional> *_large_image_list;
    TTMediaInfoStructModel<Optional> *_media_info;
    TTUserInfoStructModel<Optional> *_user_info;
    NSArray<TTActionStructModel><Optional> *_action_list;
    NSString<Optional> *_video_play_info;
    NSArray<TTFilterWordsStructModel><Optional> *_filter_words;
    NSNumber<Optional> *_show_portrait_article;
    NSNumber<Optional> *_bury_count;
    NSNumber<Optional> *_group_flags;
    NSNumber<Optional> *_cell_type;
    NSNumber<Optional> *_aggr_type;
    NSNumber<Optional> *_video_duration;
    NSNumber<Optional> *_has_video;
    NSString<Optional> *_title;
    NSNumber<Optional> *_group_id;
    NSNumber<Optional> *_has_image;
    NSNumber<Optional> *_cursor;
    NSNumber<Optional> *_behot_time;
    NSNumber<Optional> *_digg_count;
    NSNumber<Optional> *_like_count;
    NSString<Optional> *_source_open_url;
    NSNumber<Optional> *_cell_flag;
    NSNumber<Optional> *_repin_count;
    NSNumber<Optional> *_show_portrait;
    NSNumber<Optional> *_is_subject;
    NSNumber<Optional> *_item_id;
    NSString<Optional> *_source;
    NSString<Optional> *_share_url;
    NSNumber<Optional> *_publish_time;
    NSNumber<Optional> *_comment_count;
    NSNumber<Optional> *_rid;
    NSNumber<Optional> *_user_repin;
    NSNumber<Optional> *_preload_web;
    NSString<Optional> *_url;
    NSNumber<Optional> *_level;
    NSString<Optional> *_display_url;
    NSNumber<Optional> *_video_style;
    NSString<Optional> *_action_extra;
    NSNumber<Optional> *_cell_layout_style;
    NSString<Optional> *_article_url;
    NSNumber<Optional> *_source_icon_style;
    NSNumber<Optional> *_ignore_web_transform;
    NSNumber<Optional> *_user_verified;
    NSNumber<Optional> *_article_type;
    NSNumber<Optional> *_video_channel_ad_type;
    TTVideoDetailInfoStructModel<Optional> *_video_detail_info;
    NSString<Optional> *_video_third_monitor_url;
    NSNumber<Optional> *_user_bury;
    NSNumber<Optional> *_user_digg;
    NSString<Optional> *_keywords;
    NSNumber<Optional> *_video_proportion;
    NSNumber<Optional> *_video_proportion_article;
    NSNumber<Optional> *_natant_level;
    NSString<Optional> *_article_alt_url;
    NSString<Optional> *_video_source;
    NSString<Optional> *_source_avatar;
    NSNumber<Optional> *_share_count;
    NSNumber<Optional> *_abstract_text;
    NSNumber<Optional> *_is_preview;
    NSString<Optional> *_ad_id;
    NSString<Optional> *_label;
    NSNumber<Optional> *_expire_seconds;
    NSNumber<Optional> *_display_type;
    NSString<Optional> *_log_extra;
    NSArray<Optional> *_play_track_url_list;
    NSArray<Optional> *_active_play_track_url_list;
    NSArray<Optional> *_effective_play_track_url_list;
    NSArray<Optional> *_playover_track_url_list;
    NSArray<Optional> *_click_track_url_list;
    NSArray<Optional> *_track_url_list;
    NSNumber<Optional> *_effective_play_time;
    TTADModelStructModel<Optional> *_ad_button;
    TTADModelStructModel<Optional> *_ad_data;
    TTImageListStructModel<Optional> *_image;
    NSString<Optional> *_type;
    NSString<Optional> *_btn_text;
    NSString<Optional> *_web_url;
    NSString<Optional> *_web_title;
    NSNumber<Optional> *_ban_digg;
    NSNumber<Optional> *_ban_bury;
    NSString<Optional> *_phone_number;
    NSString<Optional> *_id;
    NSString<Optional> *_button_text;
    NSString<Optional> *_app_name;
    NSString<Optional> *_open_url;
    NSString<Optional> *_display_info;
    NSString<Optional> *_alert_text;
    NSString<Optional> *_ipa_url;
    NSString<Optional> *_appleid;
    NSNumber<Optional> *_action_type;
    NSString<Optional> *_download_url;
    NSNumber<Optional> *_download_count;
    NSNumber<Optional> *_hide_if_exists;
    NSNumber<Optional> *_ui_type;
    NSString<Optional> *_description_text;
    NSString<Optional> *_form_url;
    NSNumber<Optional> *_form_width;
    NSNumber<Optional> *_form_height;
    NSNumber<Optional> *_use_size_validation;
    NSString<Optional> *_source_icon;
    NSString<Optional> *_source_icon_night;
    NSArray<TTImageListStructModel><Optional> *_image_list;
    NSNumber<Optional> *_is_original;
    NSNumber<Optional> *_article_sub_type;
    NSString<Optional> *_ad_label;
    NSString<Optional> *_log_pb;
    NSString<Optional> *_activity;
    NSString<Optional> *_commoditys;
    NSString<Optional> *_raw_ad_data;
    NSNumber<Optional> *_ban_danmaku;
    NSNumber<Optional> *_danmaku_count;
    NSString<Optional> *_cell_ctrls;
    NSNumber<Optional> *_need_client_impr_recycle;
}

+ (id)keyMapper;
@property(retain, nonatomic) NSNumber<Optional> *need_client_impr_recycle; // @synthesize need_client_impr_recycle=_need_client_impr_recycle;
@property(retain, nonatomic) NSString<Optional> *cell_ctrls; // @synthesize cell_ctrls=_cell_ctrls;
@property(retain, nonatomic) NSNumber<Optional> *danmaku_count; // @synthesize danmaku_count=_danmaku_count;
@property(retain, nonatomic) NSNumber<Optional> *ban_danmaku; // @synthesize ban_danmaku=_ban_danmaku;
@property(retain, nonatomic) NSString<Optional> *raw_ad_data; // @synthesize raw_ad_data=_raw_ad_data;
@property(retain, nonatomic) NSString<Optional> *commoditys; // @synthesize commoditys=_commoditys;
@property(retain, nonatomic) NSString<Optional> *activity; // @synthesize activity=_activity;
@property(retain, nonatomic) NSString<Optional> *log_pb; // @synthesize log_pb=_log_pb;
@property(retain, nonatomic) NSString<Optional> *ad_label; // @synthesize ad_label=_ad_label;
@property(retain, nonatomic) NSNumber<Optional> *article_sub_type; // @synthesize article_sub_type=_article_sub_type;
@property(retain, nonatomic) NSNumber<Optional> *is_original; // @synthesize is_original=_is_original;
@property(retain, nonatomic) NSArray<TTImageListStructModel><Optional> *image_list; // @synthesize image_list=_image_list;
@property(retain, nonatomic) NSString<Optional> *source_icon_night; // @synthesize source_icon_night=_source_icon_night;
@property(retain, nonatomic) NSString<Optional> *source_icon; // @synthesize source_icon=_source_icon;
@property(retain, nonatomic) NSNumber<Optional> *use_size_validation; // @synthesize use_size_validation=_use_size_validation;
@property(retain, nonatomic) NSNumber<Optional> *form_height; // @synthesize form_height=_form_height;
@property(retain, nonatomic) NSNumber<Optional> *form_width; // @synthesize form_width=_form_width;
@property(retain, nonatomic) NSString<Optional> *form_url; // @synthesize form_url=_form_url;
@property(retain, nonatomic) NSString<Optional> *description_text; // @synthesize description_text=_description_text;
@property(retain, nonatomic) NSNumber<Optional> *ui_type; // @synthesize ui_type=_ui_type;
@property(retain, nonatomic) NSNumber<Optional> *hide_if_exists; // @synthesize hide_if_exists=_hide_if_exists;
@property(retain, nonatomic) NSNumber<Optional> *download_count; // @synthesize download_count=_download_count;
@property(retain, nonatomic) NSString<Optional> *download_url; // @synthesize download_url=_download_url;
@property(retain, nonatomic) NSNumber<Optional> *action_type; // @synthesize action_type=_action_type;
@property(retain, nonatomic) NSString<Optional> *appleid; // @synthesize appleid=_appleid;
@property(retain, nonatomic) NSString<Optional> *ipa_url; // @synthesize ipa_url=_ipa_url;
@property(retain, nonatomic) NSString<Optional> *alert_text; // @synthesize alert_text=_alert_text;
@property(retain, nonatomic) NSString<Optional> *display_info; // @synthesize display_info=_display_info;
@property(retain, nonatomic) NSString<Optional> *open_url; // @synthesize open_url=_open_url;
@property(retain, nonatomic) NSString<Optional> *app_name; // @synthesize app_name=_app_name;
@property(retain, nonatomic) NSString<Optional> *button_text; // @synthesize button_text=_button_text;
@property(retain, nonatomic) NSString<Optional> *id; // @synthesize id=_id;
@property(retain, nonatomic) NSString<Optional> *phone_number; // @synthesize phone_number=_phone_number;
@property(retain, nonatomic) NSNumber<Optional> *ban_bury; // @synthesize ban_bury=_ban_bury;
@property(retain, nonatomic) NSNumber<Optional> *ban_digg; // @synthesize ban_digg=_ban_digg;
@property(retain, nonatomic) NSString<Optional> *web_title; // @synthesize web_title=_web_title;
@property(retain, nonatomic) NSString<Optional> *web_url; // @synthesize web_url=_web_url;
@property(retain, nonatomic) NSString<Optional> *btn_text; // @synthesize btn_text=_btn_text;
@property(retain, nonatomic) NSString<Optional> *type; // @synthesize type=_type;
@property(retain, nonatomic) TTImageListStructModel<Optional> *image; // @synthesize image=_image;
@property(retain, nonatomic) TTADModelStructModel<Optional> *ad_data; // @synthesize ad_data=_ad_data;
@property(retain, nonatomic) TTADModelStructModel<Optional> *ad_button; // @synthesize ad_button=_ad_button;
@property(retain, nonatomic) NSNumber<Optional> *effective_play_time; // @synthesize effective_play_time=_effective_play_time;
@property(retain, nonatomic) NSArray<Optional> *track_url_list; // @synthesize track_url_list=_track_url_list;
@property(retain, nonatomic) NSArray<Optional> *click_track_url_list; // @synthesize click_track_url_list=_click_track_url_list;
@property(retain, nonatomic) NSArray<Optional> *playover_track_url_list; // @synthesize playover_track_url_list=_playover_track_url_list;
@property(retain, nonatomic) NSArray<Optional> *effective_play_track_url_list; // @synthesize effective_play_track_url_list=_effective_play_track_url_list;
@property(retain, nonatomic) NSArray<Optional> *active_play_track_url_list; // @synthesize active_play_track_url_list=_active_play_track_url_list;
@property(retain, nonatomic) NSArray<Optional> *play_track_url_list; // @synthesize play_track_url_list=_play_track_url_list;
@property(retain, nonatomic) NSString<Optional> *log_extra; // @synthesize log_extra=_log_extra;
@property(retain, nonatomic) NSNumber<Optional> *display_type; // @synthesize display_type=_display_type;
@property(retain, nonatomic) NSNumber<Optional> *expire_seconds; // @synthesize expire_seconds=_expire_seconds;
@property(retain, nonatomic) NSString<Optional> *label; // @synthesize label=_label;
@property(retain, nonatomic) NSString<Optional> *ad_id; // @synthesize ad_id=_ad_id;
@property(retain, nonatomic) NSNumber<Optional> *is_preview; // @synthesize is_preview=_is_preview;
@property(retain, nonatomic) NSNumber<Optional> *abstract_text; // @synthesize abstract_text=_abstract_text;
@property(retain, nonatomic) NSNumber<Optional> *share_count; // @synthesize share_count=_share_count;
@property(retain, nonatomic) NSString<Optional> *source_avatar; // @synthesize source_avatar=_source_avatar;
@property(retain, nonatomic) NSString<Optional> *video_source; // @synthesize video_source=_video_source;
@property(retain, nonatomic) NSString<Optional> *article_alt_url; // @synthesize article_alt_url=_article_alt_url;
@property(retain, nonatomic) NSNumber<Optional> *natant_level; // @synthesize natant_level=_natant_level;
@property(retain, nonatomic) NSNumber<Optional> *video_proportion_article; // @synthesize video_proportion_article=_video_proportion_article;
@property(retain, nonatomic) NSNumber<Optional> *video_proportion; // @synthesize video_proportion=_video_proportion;
@property(retain, nonatomic) NSString<Optional> *keywords; // @synthesize keywords=_keywords;
@property(retain, nonatomic) NSNumber<Optional> *user_digg; // @synthesize user_digg=_user_digg;
@property(retain, nonatomic) NSNumber<Optional> *user_bury; // @synthesize user_bury=_user_bury;
@property(retain, nonatomic) NSString<Optional> *video_third_monitor_url; // @synthesize video_third_monitor_url=_video_third_monitor_url;
@property(retain, nonatomic) TTVideoDetailInfoStructModel<Optional> *video_detail_info; // @synthesize video_detail_info=_video_detail_info;
@property(retain, nonatomic) NSNumber<Optional> *video_channel_ad_type; // @synthesize video_channel_ad_type=_video_channel_ad_type;
@property(retain, nonatomic) NSNumber<Optional> *article_type; // @synthesize article_type=_article_type;
@property(retain, nonatomic) NSNumber<Optional> *user_verified; // @synthesize user_verified=_user_verified;
@property(retain, nonatomic) NSNumber<Optional> *ignore_web_transform; // @synthesize ignore_web_transform=_ignore_web_transform;
@property(retain, nonatomic) NSNumber<Optional> *source_icon_style; // @synthesize source_icon_style=_source_icon_style;
@property(retain, nonatomic) NSString<Optional> *article_url; // @synthesize article_url=_article_url;
@property(retain, nonatomic) NSNumber<Optional> *cell_layout_style; // @synthesize cell_layout_style=_cell_layout_style;
@property(retain, nonatomic) NSString<Optional> *action_extra; // @synthesize action_extra=_action_extra;
@property(retain, nonatomic) NSNumber<Optional> *video_style; // @synthesize video_style=_video_style;
@property(retain, nonatomic) NSString<Optional> *display_url; // @synthesize display_url=_display_url;
@property(retain, nonatomic) NSNumber<Optional> *level; // @synthesize level=_level;
@property(retain, nonatomic) NSString<Optional> *url; // @synthesize url=_url;
@property(retain, nonatomic) NSNumber<Optional> *preload_web; // @synthesize preload_web=_preload_web;
@property(retain, nonatomic) NSNumber<Optional> *user_repin; // @synthesize user_repin=_user_repin;
@property(retain, nonatomic) NSNumber<Optional> *rid; // @synthesize rid=_rid;
@property(retain, nonatomic) NSNumber<Optional> *comment_count; // @synthesize comment_count=_comment_count;
@property(retain, nonatomic) NSNumber<Optional> *publish_time; // @synthesize publish_time=_publish_time;
@property(retain, nonatomic) NSString<Optional> *share_url; // @synthesize share_url=_share_url;
@property(retain, nonatomic) NSString<Optional> *source; // @synthesize source=_source;
@property(retain, nonatomic) NSNumber<Optional> *item_id; // @synthesize item_id=_item_id;
@property(retain, nonatomic) NSNumber<Optional> *is_subject; // @synthesize is_subject=_is_subject;
@property(retain, nonatomic) NSNumber<Optional> *show_portrait; // @synthesize show_portrait=_show_portrait;
@property(retain, nonatomic) NSNumber<Optional> *repin_count; // @synthesize repin_count=_repin_count;
@property(retain, nonatomic) NSNumber<Optional> *cell_flag; // @synthesize cell_flag=_cell_flag;
@property(retain, nonatomic) NSString<Optional> *source_open_url; // @synthesize source_open_url=_source_open_url;
@property(retain, nonatomic) NSNumber<Optional> *like_count; // @synthesize like_count=_like_count;
@property(retain, nonatomic) NSNumber<Optional> *digg_count; // @synthesize digg_count=_digg_count;
@property(retain, nonatomic) NSNumber<Optional> *behot_time; // @synthesize behot_time=_behot_time;
@property(retain, nonatomic) NSNumber<Optional> *cursor; // @synthesize cursor=_cursor;
@property(retain, nonatomic) NSNumber<Optional> *has_image; // @synthesize has_image=_has_image;
@property(retain, nonatomic) NSNumber<Optional> *group_id; // @synthesize group_id=_group_id;
@property(retain, nonatomic) NSString<Optional> *title; // @synthesize title=_title;
@property(retain, nonatomic) NSNumber<Optional> *has_video; // @synthesize has_video=_has_video;
@property(retain, nonatomic) NSNumber<Optional> *video_duration; // @synthesize video_duration=_video_duration;
@property(retain, nonatomic) NSNumber<Optional> *aggr_type; // @synthesize aggr_type=_aggr_type;
@property(retain, nonatomic) NSNumber<Optional> *cell_type; // @synthesize cell_type=_cell_type;
@property(retain, nonatomic) NSNumber<Optional> *group_flags; // @synthesize group_flags=_group_flags;
@property(retain, nonatomic) NSNumber<Optional> *bury_count; // @synthesize bury_count=_bury_count;
@property(retain, nonatomic) NSNumber<Optional> *show_portrait_article; // @synthesize show_portrait_article=_show_portrait_article;
@property(retain, nonatomic) NSArray<TTFilterWordsStructModel><Optional> *filter_words; // @synthesize filter_words=_filter_words;
@property(retain, nonatomic) NSString<Optional> *video_play_info; // @synthesize video_play_info=_video_play_info;
@property(retain, nonatomic) NSArray<TTActionStructModel><Optional> *action_list; // @synthesize action_list=_action_list;
@property(retain, nonatomic) TTUserInfoStructModel<Optional> *user_info; // @synthesize user_info=_user_info;
@property(retain, nonatomic) TTMediaInfoStructModel<Optional> *media_info; // @synthesize media_info=_media_info;
@property(retain, nonatomic) NSArray<TTImageListStructModel><Optional> *large_image_list; // @synthesize large_image_list=_large_image_list;
@property(retain, nonatomic) TTImageListStructModel<Optional> *middle_image; // @synthesize middle_image=_middle_image;
@property(retain, nonatomic) NSNumber<Optional> *ban_comment; // @synthesize ban_comment=_ban_comment;
@property(retain, nonatomic) NSString<Optional> *media_name; // @synthesize media_name=_media_name;
@property(retain, nonatomic) NSString<Optional> *video_id; // @synthesize video_id=_video_id;
@property(retain, nonatomic) NSNumber<Optional> *read_count; // @synthesize read_count=_read_count;
@property(retain, nonatomic) NSString<Optional> *message; // @synthesize message=_message;
- (void).cxx_destruct;
- (void)reset;
- (id)init;
- (void)setRaw_ad_data_dic:(id)arg1;
@property(readonly, nonatomic) NSDictionary *raw_ad_data_dic;
- (id)getAdPropertyValueForSelector:(SEL)arg1;
@property(readonly, nonatomic) NSString *ttv_description_text;
@property(readonly, nonatomic) TTImageListStructModel *ttv_image_list;
@property(readonly, nonatomic) NSString *ttv_source_icon_night;
@property(readonly, nonatomic) NSString *ttv_source_icon;
@property(readonly, nonatomic) NSNumber *ttv_use_size_validation;
@property(readonly, nonatomic) NSNumber *ttv_form_height;
@property(readonly, nonatomic) NSNumber *ttv_form_width;
@property(readonly, nonatomic) NSString *ttv_form_url;
@property(readonly, nonatomic) NSString *ttv_source_avatar;
@property(readonly, nonatomic) NSNumber *ttv_ui_type;
@property(readonly, nonatomic) NSNumber *ttv_hide_if_exists;
@property(readonly, nonatomic) NSNumber *ttv_download_count;
@property(readonly, nonatomic) NSString *ttv_log_extra;
@property(readonly, nonatomic) NSString *ttv_download_url;
@property(readonly, nonatomic) NSNumber *ttv_action_type;
@property(readonly, nonatomic) NSString *ttv_web_title;
@property(readonly, nonatomic) NSString *ttv_web_url;
@property(readonly, nonatomic) NSString *ttv_appleid;
@property(readonly, nonatomic) NSString *ttv_alert_text;
@property(readonly, nonatomic) NSString *ttv_title;
@property(readonly, nonatomic) NSString *ttv_source;
@property(readonly, nonatomic) NSString *ttv_ipa_url;
@property(readonly, nonatomic) NSString *ttv_open_url;
@property(readonly, nonatomic) NSString *ttv_app_name;
@property(readonly, nonatomic) NSNumber *ttv_display_type;
@property(readonly, nonatomic) TTImageListStructModel *ttv_image;
@property(readonly, nonatomic) NSNumber *ttv_expire_seconds;
@property(readonly, nonatomic) NSString *ttv_button_text;
@property(readonly, nonatomic) NSString *ttv_id;
@property(readonly, nonatomic) NSString *ttv_ad_id;
@property(readonly, nonatomic) NSString *ttv_type;
@property(readonly, nonatomic) NSString *ttv_phone_number;

@end
