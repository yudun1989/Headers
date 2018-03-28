//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

#import "TTAd-Protocol.h"
#import "TTAdAppAction-Protocol.h"
#import "TTAdPhoneAction-Protocol.h"

@class NSArray, NSNumber, NSString;

@interface TTAdShortVideoModel : JSONModel <TTAd, TTAdPhoneAction, TTAdAppAction>
{
    _Bool _hide_if_exists;
    NSString *_ad_id;
    NSString *_log_extra;
    NSString *_log_extra2;
    long long _expire_seconds;
    NSString *_button_text;
    NSString *_type;
    NSString *_web_title;
    NSString *_web_url;
    NSString *_open_url;
    NSArray *_click_track_url_list;
    NSArray *_track_url_list;
    double _effective_play_time;
    NSArray *_effective_play_track_url_list;
    NSArray *_play_track_url_list;
    NSArray *_playover_track_url_list;
    NSString *_apple_id;
    NSString *_app_name;
    NSString *_download_url;
    NSString *_ipa_url;
    NSString *_phoneNumber;
    NSString *_form_url;
    NSNumber *_form_width;
    NSNumber *_form_height;
    NSNumber *_use_size_validation;
    NSString *_label_pos;
    unsigned long long _show_type;
    long long _button_style;
}

+ (_Bool)propertyIsOptional:(id)arg1;
+ (id)keyMapper;
@property(nonatomic) long long button_style; // @synthesize button_style=_button_style;
@property(nonatomic) unsigned long long show_type; // @synthesize show_type=_show_type;
@property(copy, nonatomic) NSString *label_pos; // @synthesize label_pos=_label_pos;
@property(copy, nonatomic) NSNumber *use_size_validation; // @synthesize use_size_validation=_use_size_validation;
@property(copy, nonatomic) NSNumber *form_height; // @synthesize form_height=_form_height;
@property(copy, nonatomic) NSNumber *form_width; // @synthesize form_width=_form_width;
@property(copy, nonatomic) NSString *form_url; // @synthesize form_url=_form_url;
@property(copy, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(nonatomic) _Bool hide_if_exists; // @synthesize hide_if_exists=_hide_if_exists;
@property(copy, nonatomic) NSString *ipa_url; // @synthesize ipa_url=_ipa_url;
@property(copy, nonatomic) NSString *download_url; // @synthesize download_url=_download_url;
@property(copy, nonatomic) NSString *app_name; // @synthesize app_name=_app_name;
@property(copy, nonatomic) NSString *apple_id; // @synthesize apple_id=_apple_id;
@property(copy, nonatomic) NSArray *playover_track_url_list; // @synthesize playover_track_url_list=_playover_track_url_list;
@property(copy, nonatomic) NSArray *play_track_url_list; // @synthesize play_track_url_list=_play_track_url_list;
@property(copy, nonatomic) NSArray *effective_play_track_url_list; // @synthesize effective_play_track_url_list=_effective_play_track_url_list;
@property(nonatomic) double effective_play_time; // @synthesize effective_play_time=_effective_play_time;
@property(copy, nonatomic) NSArray *track_url_list; // @synthesize track_url_list=_track_url_list;
@property(copy, nonatomic) NSArray *click_track_url_list; // @synthesize click_track_url_list=_click_track_url_list;
@property(copy, nonatomic) NSString *open_url; // @synthesize open_url=_open_url;
@property(copy, nonatomic) NSString *web_url; // @synthesize web_url=_web_url;
@property(copy, nonatomic) NSString *web_title; // @synthesize web_title=_web_title;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *button_text; // @synthesize button_text=_button_text;
@property(nonatomic) long long expire_seconds; // @synthesize expire_seconds=_expire_seconds;
@property(copy, nonatomic) NSString *log_extra2; // @synthesize log_extra2=_log_extra2;
@property(copy, nonatomic) NSString *log_extra; // @synthesize log_extra=_log_extra;
@property(copy, nonatomic) NSString *ad_id; // @synthesize ad_id=_ad_id;
- (void).cxx_destruct;
- (void)trackDrawWithTag:(id)arg1 label:(id)arg2 extra:(id)arg3;
- (void)trackFeedWithTag:(id)arg1 label:(id)arg2 extra:(id)arg3;
- (void)sendTrackURLs:(id)arg1;
- (id)actionButtonIcon;
- (id)actionButtonText;
@property(copy, nonatomic) NSString *tabUrl;
@property(copy, nonatomic) NSString *appUrl;
- (_Bool)ignoreApp;
- (_Bool)isExpire:(double)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

