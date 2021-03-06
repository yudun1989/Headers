//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KSBaseFeed.h"

#import "KSResumableFileDownloadItem-Protocol.h"
#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class KSFeedAd, KSFeedAttributeFormatter, KSMusicItem, KSPoi, KSResumableDownloadProgress, NSArray, NSData, NSError, NSMutableArray, NSNumber, NSString;

@interface KS_feed : KSBaseFeed <KSResumableFileDownloadItem, NSCoding, NSCopying>
{
    _Bool _followRequesting;
    _Bool _privacy;
    _Bool _showLikersName;
    _Bool _inappropriate;
    _Bool _pending;
    _Bool _profile_top_photo;
    _Bool _expectFreeTraffic;
    NSNumber *_us_d;
    NSNumber *_us_c;
    NSString *_baidu_mv_url;
    NSString *_baidu_mv_url_time;
    NSString *_baidu_thumbnail_url;
    NSString *_baidu_thumbnail_url_time;
    NSNumber *_comment_count;
    NSMutableArray *_comments;
    NSNumber *_following;
    NSNumber *_forward_count;
    NSString *_headurl;
    NSMutableArray *_headurls;
    NSNumber *_liked;
    NSMutableArray *_likers;
    NSMutableArray *_followLikers;
    NSNumber *_hated;
    NSNumber *_photo_id;
    NSNumber *_photo_status;
    NSNumber *_unlike_count;
    NSNumber *_user_id;
    NSString *_user_name;
    NSString *_user_sex;
    NSNumber *_view_count;
    NSString *_main_mv_url;
    NSArray *_main_mv_urls;
    NSArray *_main_mv_urls_h265;
    NSArray *_main_mv_urls_rate;
    NSArray *_cover_urls;
    NSString *_main_url;
    NSArray *_main_urls;
    NSNumber *_tag_hash_type;
    KSMusicItem *_music;
    NSNumber *_hasMusicTag;
    NSArray *_magicFaces;
    NSNumber *_hasMagicFaceTag;
    NSString *_display_reco_reason;
    NSArray *_tags;
    NSNumber *_tagTop;
    NSNumber *_show_count;
    KSFeedAd *_ad;
    NSNumber *_snapShowDeadline;
    NSString *_photoInfoForShare;
    KSPoi *_poi;
    KSFeedAttributeFormatter *_attributeFormatter;
}

+ (id)mj_objectClassInArray;
+ (id)mj_ignoredCodingPropertyNames;
+ (id)mj_ignoredPropertyNames;
@property(retain, nonatomic) KSFeedAttributeFormatter *attributeFormatter; // @synthesize attributeFormatter=_attributeFormatter;
@property(retain, nonatomic) KSPoi *poi; // @synthesize poi=_poi;
@property(nonatomic) _Bool expectFreeTraffic; // @synthesize expectFreeTraffic=_expectFreeTraffic;
@property(nonatomic) _Bool profile_top_photo; // @synthesize profile_top_photo=_profile_top_photo;
@property(copy, nonatomic) NSString *photoInfoForShare; // @synthesize photoInfoForShare=_photoInfoForShare;
@property(nonatomic) _Bool pending; // @synthesize pending=_pending;
@property(nonatomic) _Bool inappropriate; // @synthesize inappropriate=_inappropriate;
@property(retain, nonatomic) NSNumber *snapShowDeadline; // @synthesize snapShowDeadline=_snapShowDeadline;
@property(retain, nonatomic) KSFeedAd *ad; // @synthesize ad=_ad;
@property(retain, nonatomic) NSNumber *show_count; // @synthesize show_count=_show_count;
@property(retain, nonatomic) NSNumber *tagTop; // @synthesize tagTop=_tagTop;
@property(retain, nonatomic) NSArray *tags; // @synthesize tags=_tags;
@property(retain, nonatomic) NSString *display_reco_reason; // @synthesize display_reco_reason=_display_reco_reason;
@property(retain, nonatomic) NSNumber *hasMagicFaceTag; // @synthesize hasMagicFaceTag=_hasMagicFaceTag;
@property(retain, nonatomic) NSArray *magicFaces; // @synthesize magicFaces=_magicFaces;
@property(retain, nonatomic) NSNumber *hasMusicTag; // @synthesize hasMusicTag=_hasMusicTag;
@property(retain, nonatomic) KSMusicItem *music; // @synthesize music=_music;
@property(retain, nonatomic) NSNumber *tag_hash_type; // @synthesize tag_hash_type=_tag_hash_type;
@property(retain, nonatomic) NSArray *main_urls; // @synthesize main_urls=_main_urls;
@property(retain, nonatomic) NSString *main_url; // @synthesize main_url=_main_url;
@property(retain, nonatomic) NSArray *cover_urls; // @synthesize cover_urls=_cover_urls;
@property(retain, nonatomic) NSArray *main_mv_urls_rate; // @synthesize main_mv_urls_rate=_main_mv_urls_rate;
@property(retain, nonatomic) NSArray *main_mv_urls_h265; // @synthesize main_mv_urls_h265=_main_mv_urls_h265;
@property(retain, nonatomic) NSArray *main_mv_urls; // @synthesize main_mv_urls=_main_mv_urls;
@property(retain, nonatomic) NSString *main_mv_url; // @synthesize main_mv_url=_main_mv_url;
@property(nonatomic) _Bool showLikersName; // @synthesize showLikersName=_showLikersName;
@property(retain, nonatomic) NSNumber *view_count; // @synthesize view_count=_view_count;
@property(retain, nonatomic) NSString *user_sex; // @synthesize user_sex=_user_sex;
@property(retain, nonatomic) NSString *user_name; // @synthesize user_name=_user_name;
@property(nonatomic) _Bool privacy; // @synthesize privacy=_privacy;
@property(retain, nonatomic) NSNumber *user_id; // @synthesize user_id=_user_id;
@property(retain, nonatomic) NSNumber *unlike_count; // @synthesize unlike_count=_unlike_count;
@property(retain, nonatomic) NSNumber *photo_status; // @synthesize photo_status=_photo_status;
@property(retain, nonatomic) NSNumber *photo_id; // @synthesize photo_id=_photo_id;
@property(retain, nonatomic) NSNumber *hated; // @synthesize hated=_hated;
@property(retain, nonatomic) NSMutableArray *followLikers; // @synthesize followLikers=_followLikers;
@property(retain, nonatomic) NSMutableArray *likers; // @synthesize likers=_likers;
@property(retain, nonatomic) NSNumber *liked; // @synthesize liked=_liked;
@property(retain, nonatomic) NSMutableArray *headurls; // @synthesize headurls=_headurls;
@property(retain, nonatomic) NSString *headurl; // @synthesize headurl=_headurl;
@property(retain, nonatomic) NSNumber *forward_count; // @synthesize forward_count=_forward_count;
@property(nonatomic) _Bool followRequesting; // @synthesize followRequesting=_followRequesting;
@property(retain, nonatomic) NSNumber *following; // @synthesize following=_following;
@property(retain, nonatomic) NSMutableArray *comments; // @synthesize comments=_comments;
@property(retain, nonatomic) NSNumber *comment_count; // @synthesize comment_count=_comment_count;
@property(retain, nonatomic) NSString *baidu_thumbnail_url_time; // @synthesize baidu_thumbnail_url_time=_baidu_thumbnail_url_time;
@property(retain, nonatomic) NSString *baidu_thumbnail_url; // @synthesize baidu_thumbnail_url=_baidu_thumbnail_url;
@property(retain, nonatomic) NSString *baidu_mv_url_time; // @synthesize baidu_mv_url_time=_baidu_mv_url_time;
@property(retain, nonatomic) NSString *baidu_mv_url; // @synthesize baidu_mv_url=_baidu_mv_url;
@property(retain, nonatomic) NSNumber *us_c; // @synthesize us_c=_us_c;
@property(retain, nonatomic) NSNumber *us_d; // @synthesize us_d=_us_d;
- (void).cxx_destruct;
- (_Bool)isValid;
- (_Bool)ks_allowsComment;
- (void)didReceiveFollowingChangedNotification:(id)arg1;
- (_Bool)canShare;
- (id)ks_fullTitle;
- (void)removeLiker:(id)arg1;
- (void)addLiker:(id)arg1;
- (id)user;
- (void)setLike_count:(id)arg1;
- (void)sortComments;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)feedId;
- (_Bool)isEqual:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)downloadRemoteUrl;
@property unsigned long long downloadStatus;
@property(retain, nonatomic) KSResumableDownloadProgress *downloadProgress;
@property(retain, nonatomic) NSError *downloadError;
@property(retain, nonatomic) NSData *downloadResumeData;
- (id)feedLogNode;
@property(nonatomic) double bigModeHeight;
- (id)coverPreviewCachedkey;
- (id)thumbnailPageURL;
- (id)imageCachedKey;
- (unsigned long long)resourceType;
- (id)pageURL;
- (id)videoLocalResourceName;
- (id)videoResourceName;
- (id)hourglassIconForStory;
- (_Bool)shouldShowHourglassIconForStory;
- (id)ks_displayTimesString;
- (id)ks_playableAVResourceURL;
- (id)ks_playableAVResourceURLs;
- (id)ks_userName;

@end

