//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

@class NSArray, NSNumber, NSString, TTImageListStructModel, TTUserInfoStructModel, TTVideoDetailInfoStructModel;
@protocol Optional, TTImageListStructModel><Optional;

@interface TTRelatedVideoItemStructModel : JSONModel
{
    NSString<Optional> *_abstract_text;
    NSNumber<Optional> *_aggr_type;
    NSNumber<Optional> *_article_sub_type;
    NSNumber<Optional> *_article_type;
    NSString<Optional> *_article_url;
    NSNumber<Optional> *_ban_comment;
    NSNumber<Optional> *_behot_time;
    NSString<Optional> *_card_type;
    NSNumber<Optional> *_comment_count;
    NSNumber<Optional> *_digg_count;
    NSString<Optional> *_display_title;
    NSNumber<Optional> *_bury_count;
    NSNumber<Optional> *_group_flags;
    NSString<Optional> *_display_url;
    NSString<Optional> *_group_id;
    NSNumber<Optional> *_has_image;
    NSNumber<Optional> *_has_m3u8_video;
    NSNumber<Optional> *_has_mp4_video;
    NSNumber<Optional> *_has_video;
    NSNumber<Optional> *_hot;
    NSNumber<Optional> *_image_count;
    NSArray<TTImageListStructModel><Optional> *_image_list;
    NSNumber<Optional> *_is_article;
    NSString<Optional> *_item_id;
    NSString<Optional> *_keywords;
    NSNumber<Optional> *_level;
    NSString<Optional> *_media_name;
    TTImageListStructModel<Optional> *_middle_image;
    NSNumber<Optional> *_preload_web;
    NSNumber<Optional> *_publish_time;
    NSNumber<Optional> *_repin_count;
    NSString<Optional> *_share_url;
    NSString<Optional> *_source;
    NSString<Optional> *_tag;
    NSString<Optional> *_tag_id;
    NSNumber<Optional> *_text_count;
    NSNumber<Optional> *_tip;
    NSString<Optional> *_title;
    NSString<Optional> *_url;
    TTVideoDetailInfoStructModel<Optional> *_video_detail_info;
    NSNumber<Optional> *_video_duration;
    NSNumber<Optional> *_video_style;
    NSNumber<Optional> *_ad_id;
    NSString<Optional> *_log_extra;
    NSString<Optional> *_show_tag;
    NSNumber<Optional> *_is_preview;
    NSString<Optional> *_web_url;
    NSString<Optional> *_type;
    NSNumber<Optional> *_effective_play_time;
    NSNumber<Optional> *_ban_bury;
    NSNumber<Optional> *_show_portrait_article;
    NSNumber<Optional> *_video_proportion_article;
    NSNumber<Optional> *_share_count;
    NSNumber<Optional> *_ban_danmaku;
    NSString<Optional> *_video_source;
    NSNumber<Optional> *_danmaku_count;
    TTUserInfoStructModel<Optional> *_user_info;
    NSNumber<Optional> *_ban_action;
    NSArray<Optional> *_click_track_url_list;
    NSArray<Optional> *_play_track_url_list;
    NSArray<Optional> *_active_play_track_url_list;
    NSArray<Optional> *_effective_play_track_url_list;
    NSArray<Optional> *_playover_track_url_list;
    NSArray<Optional> *_track_url_list;
    NSString<Optional> *_creative_type;
    NSString<Optional> *_phone_number;
    NSNumber<Optional> *_dial_action_type;
    NSString<Optional> *_ipa_url;
    NSString<Optional> *_download_url;
    NSString<Optional> *_apple_id;
    NSString<Optional> *_open_url;
    NSString<Optional> *_button_text;
    NSString<Optional> *_image_url;
    NSString<Optional> *_media_id;
    NSNumber<Optional> *_auto_load;
    NSNumber<Optional> *_col_no;
    NSString<Optional> *_outer_schema;
    NSString<Optional> *_open_page_url;
    NSString<Optional> *_log_pb;
    NSString<Optional> *_video_subject_id;
    NSString<Optional> *_form_url;
    NSNumber<Optional> *_use_size_validation;
    NSNumber<Optional> *_form_width;
    NSNumber<Optional> *_form_height;
    NSNumber<Optional> *_ui_type;
    NSString<Optional> *_title_rich_span;
    NSNumber<Optional> *_hide_if_exists;
}

+ (id)keyMapper;
@property(retain, nonatomic) NSNumber<Optional> *hide_if_exists; // @synthesize hide_if_exists=_hide_if_exists;
@property(retain, nonatomic) NSString<Optional> *title_rich_span; // @synthesize title_rich_span=_title_rich_span;
@property(retain, nonatomic) NSNumber<Optional> *ui_type; // @synthesize ui_type=_ui_type;
@property(retain, nonatomic) NSNumber<Optional> *form_height; // @synthesize form_height=_form_height;
@property(retain, nonatomic) NSNumber<Optional> *form_width; // @synthesize form_width=_form_width;
@property(retain, nonatomic) NSNumber<Optional> *use_size_validation; // @synthesize use_size_validation=_use_size_validation;
@property(retain, nonatomic) NSString<Optional> *form_url; // @synthesize form_url=_form_url;
@property(retain, nonatomic) NSString<Optional> *video_subject_id; // @synthesize video_subject_id=_video_subject_id;
@property(retain, nonatomic) NSString<Optional> *log_pb; // @synthesize log_pb=_log_pb;
@property(retain, nonatomic) NSString<Optional> *open_page_url; // @synthesize open_page_url=_open_page_url;
@property(retain, nonatomic) NSString<Optional> *outer_schema; // @synthesize outer_schema=_outer_schema;
@property(retain, nonatomic) NSNumber<Optional> *col_no; // @synthesize col_no=_col_no;
@property(retain, nonatomic) NSNumber<Optional> *auto_load; // @synthesize auto_load=_auto_load;
@property(retain, nonatomic) NSString<Optional> *media_id; // @synthesize media_id=_media_id;
@property(retain, nonatomic) NSString<Optional> *image_url; // @synthesize image_url=_image_url;
@property(retain, nonatomic) NSString<Optional> *button_text; // @synthesize button_text=_button_text;
@property(retain, nonatomic) NSString<Optional> *open_url; // @synthesize open_url=_open_url;
@property(retain, nonatomic) NSString<Optional> *apple_id; // @synthesize apple_id=_apple_id;
@property(retain, nonatomic) NSString<Optional> *download_url; // @synthesize download_url=_download_url;
@property(retain, nonatomic) NSString<Optional> *ipa_url; // @synthesize ipa_url=_ipa_url;
@property(retain, nonatomic) NSNumber<Optional> *dial_action_type; // @synthesize dial_action_type=_dial_action_type;
@property(retain, nonatomic) NSString<Optional> *phone_number; // @synthesize phone_number=_phone_number;
@property(retain, nonatomic) NSString<Optional> *creative_type; // @synthesize creative_type=_creative_type;
@property(retain, nonatomic) NSArray<Optional> *track_url_list; // @synthesize track_url_list=_track_url_list;
@property(retain, nonatomic) NSArray<Optional> *playover_track_url_list; // @synthesize playover_track_url_list=_playover_track_url_list;
@property(retain, nonatomic) NSArray<Optional> *effective_play_track_url_list; // @synthesize effective_play_track_url_list=_effective_play_track_url_list;
@property(retain, nonatomic) NSArray<Optional> *active_play_track_url_list; // @synthesize active_play_track_url_list=_active_play_track_url_list;
@property(retain, nonatomic) NSArray<Optional> *play_track_url_list; // @synthesize play_track_url_list=_play_track_url_list;
@property(retain, nonatomic) NSArray<Optional> *click_track_url_list; // @synthesize click_track_url_list=_click_track_url_list;
@property(retain, nonatomic) NSNumber<Optional> *ban_action; // @synthesize ban_action=_ban_action;
@property(retain, nonatomic) TTUserInfoStructModel<Optional> *user_info; // @synthesize user_info=_user_info;
@property(retain, nonatomic) NSNumber<Optional> *danmaku_count; // @synthesize danmaku_count=_danmaku_count;
@property(retain, nonatomic) NSString<Optional> *video_source; // @synthesize video_source=_video_source;
@property(retain, nonatomic) NSNumber<Optional> *ban_danmaku; // @synthesize ban_danmaku=_ban_danmaku;
@property(retain, nonatomic) NSNumber<Optional> *share_count; // @synthesize share_count=_share_count;
@property(retain, nonatomic) NSNumber<Optional> *video_proportion_article; // @synthesize video_proportion_article=_video_proportion_article;
@property(retain, nonatomic) NSNumber<Optional> *show_portrait_article; // @synthesize show_portrait_article=_show_portrait_article;
@property(retain, nonatomic) NSNumber<Optional> *ban_bury; // @synthesize ban_bury=_ban_bury;
@property(retain, nonatomic) NSNumber<Optional> *effective_play_time; // @synthesize effective_play_time=_effective_play_time;
@property(retain, nonatomic) NSString<Optional> *type; // @synthesize type=_type;
@property(retain, nonatomic) NSString<Optional> *web_url; // @synthesize web_url=_web_url;
@property(retain, nonatomic) NSNumber<Optional> *is_preview; // @synthesize is_preview=_is_preview;
@property(retain, nonatomic) NSString<Optional> *show_tag; // @synthesize show_tag=_show_tag;
@property(retain, nonatomic) NSString<Optional> *log_extra; // @synthesize log_extra=_log_extra;
@property(retain, nonatomic) NSNumber<Optional> *ad_id; // @synthesize ad_id=_ad_id;
@property(retain, nonatomic) NSNumber<Optional> *video_style; // @synthesize video_style=_video_style;
@property(retain, nonatomic) NSNumber<Optional> *video_duration; // @synthesize video_duration=_video_duration;
@property(retain, nonatomic) TTVideoDetailInfoStructModel<Optional> *video_detail_info; // @synthesize video_detail_info=_video_detail_info;
@property(retain, nonatomic) NSString<Optional> *url; // @synthesize url=_url;
@property(retain, nonatomic) NSString<Optional> *title; // @synthesize title=_title;
@property(retain, nonatomic) NSNumber<Optional> *tip; // @synthesize tip=_tip;
@property(retain, nonatomic) NSNumber<Optional> *text_count; // @synthesize text_count=_text_count;
@property(retain, nonatomic) NSString<Optional> *tag_id; // @synthesize tag_id=_tag_id;
@property(retain, nonatomic) NSString<Optional> *tag; // @synthesize tag=_tag;
@property(retain, nonatomic) NSString<Optional> *source; // @synthesize source=_source;
@property(retain, nonatomic) NSString<Optional> *share_url; // @synthesize share_url=_share_url;
@property(retain, nonatomic) NSNumber<Optional> *repin_count; // @synthesize repin_count=_repin_count;
@property(retain, nonatomic) NSNumber<Optional> *publish_time; // @synthesize publish_time=_publish_time;
@property(retain, nonatomic) NSNumber<Optional> *preload_web; // @synthesize preload_web=_preload_web;
@property(retain, nonatomic) TTImageListStructModel<Optional> *middle_image; // @synthesize middle_image=_middle_image;
@property(retain, nonatomic) NSString<Optional> *media_name; // @synthesize media_name=_media_name;
@property(retain, nonatomic) NSNumber<Optional> *level; // @synthesize level=_level;
@property(retain, nonatomic) NSString<Optional> *keywords; // @synthesize keywords=_keywords;
@property(retain, nonatomic) NSString<Optional> *item_id; // @synthesize item_id=_item_id;
@property(retain, nonatomic) NSNumber<Optional> *is_article; // @synthesize is_article=_is_article;
@property(retain, nonatomic) NSArray<TTImageListStructModel><Optional> *image_list; // @synthesize image_list=_image_list;
@property(retain, nonatomic) NSNumber<Optional> *image_count; // @synthesize image_count=_image_count;
@property(retain, nonatomic) NSNumber<Optional> *hot; // @synthesize hot=_hot;
@property(retain, nonatomic) NSNumber<Optional> *has_video; // @synthesize has_video=_has_video;
@property(retain, nonatomic) NSNumber<Optional> *has_mp4_video; // @synthesize has_mp4_video=_has_mp4_video;
@property(retain, nonatomic) NSNumber<Optional> *has_m3u8_video; // @synthesize has_m3u8_video=_has_m3u8_video;
@property(retain, nonatomic) NSNumber<Optional> *has_image; // @synthesize has_image=_has_image;
@property(retain, nonatomic) NSString<Optional> *group_id; // @synthesize group_id=_group_id;
@property(retain, nonatomic) NSString<Optional> *display_url; // @synthesize display_url=_display_url;
@property(retain, nonatomic) NSNumber<Optional> *group_flags; // @synthesize group_flags=_group_flags;
@property(retain, nonatomic) NSNumber<Optional> *bury_count; // @synthesize bury_count=_bury_count;
@property(retain, nonatomic) NSString<Optional> *display_title; // @synthesize display_title=_display_title;
@property(retain, nonatomic) NSNumber<Optional> *digg_count; // @synthesize digg_count=_digg_count;
@property(retain, nonatomic) NSNumber<Optional> *comment_count; // @synthesize comment_count=_comment_count;
@property(retain, nonatomic) NSString<Optional> *card_type; // @synthesize card_type=_card_type;
@property(retain, nonatomic) NSNumber<Optional> *behot_time; // @synthesize behot_time=_behot_time;
@property(retain, nonatomic) NSNumber<Optional> *ban_comment; // @synthesize ban_comment=_ban_comment;
@property(retain, nonatomic) NSString<Optional> *article_url; // @synthesize article_url=_article_url;
@property(retain, nonatomic) NSNumber<Optional> *article_type; // @synthesize article_type=_article_type;
@property(retain, nonatomic) NSNumber<Optional> *article_sub_type; // @synthesize article_sub_type=_article_sub_type;
@property(retain, nonatomic) NSNumber<Optional> *aggr_type; // @synthesize aggr_type=_aggr_type;
@property(retain, nonatomic) NSString<Optional> *abstract_text; // @synthesize abstract_text=_abstract_text;
- (void).cxx_destruct;
- (void)reset;
- (id)init;

@end
