//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/JSExport-Protocol.h>

@class NSDictionary, NSMutableDictionary, QZFeedScene, QzoneFeedModel;

@protocol QZFeedComponentExport <JSExport>
+ (NSDictionary *)createFeedContentZoneDataWithFeedModel:(QzoneFeedModel *)arg1 feedScene:(QZFeedScene *)arg2;
+ (NSDictionary *)createMainPageShareDataWithFeedModel:(QzoneFeedModel *)arg1 feedScene:(QZFeedScene *)arg2;
+ (NSDictionary *)createFeedTitleZoneDataWithFeedModel:(QzoneFeedModel *)arg1;
+ (void)updateMainPageShareAttribute:(NSMutableDictionary *)arg1 withFeedModel:(QzoneFeedModel *)arg2;
+ (void)updateForwardAttribute:(NSMutableDictionary *)arg1 withFeedModel:(QzoneFeedModel *)arg2;
+ (NSDictionary *)createFeedForwardZoneDataWithFeedModel:(QzoneFeedModel *)arg1 feedScene:(QZFeedScene *)arg2;
+ (void)configBrowsePhotoMode:(NSMutableDictionary *)arg1 withFeedModel:(QzoneFeedModel *)arg2 feedScene:(QZFeedScene *)arg3;
+ (void)updateSummaryAttribute:(NSMutableDictionary *)arg1 withFeedModel:(QzoneFeedModel *)arg2 feedScene:(QZFeedScene *)arg3;
+ (NSDictionary *)createFeedSummaryAttributeWithFeedModel:(QzoneFeedModel *)arg1 feedScene:(QZFeedScene *)arg2;
+ (void)updateSeperatorAttribute:(NSMutableDictionary *)arg1 withFeedModel:(QzoneFeedModel *)arg2 feedScene:(QZFeedScene *)arg3;
+ (NSDictionary *)createFeedSeperatorAttributeWithFeedModel:(QzoneFeedModel *)arg1 feedScene:(QZFeedScene *)arg2;
+ (NSDictionary *)createFaceNumWithFeedModel:(QzoneFeedModel *)arg1 bgZoneHidden:(_Bool)arg2;
+ (NSDictionary *)createFeedPictureZoneAttributeWithFeedModel:(QzoneFeedModel *)arg1 feedScene:(QZFeedScene *)arg2;
+ (NSDictionary *)createShareThumbZoneDataWithFeedModel:(QzoneFeedModel *)arg1 feedScene:(QZFeedScene *)arg2;
+ (NSDictionary *)createBottomRecomDataWithFeedModel:(QzoneFeedModel *)arg1 feedScene:(QZFeedScene *)arg2;
+ (void)updateCommentReplyConfig:(NSMutableDictionary *)arg1 withFeedModel:(QzoneFeedModel *)arg2 feedScene:(QZFeedScene *)arg3;
+ (NSDictionary *)createCommentReplyDataWithFeedModel:(QzoneFeedModel *)arg1 feedScene:(QZFeedScene *)arg2;
+ (void)updateUserListConfig:(NSMutableDictionary *)arg1 withFeedModel:(QzoneFeedModel *)arg2 feedScene:(QZFeedScene *)arg3;
+ (NSDictionary *)createUserListZoneDataWithFeedModel:(QzoneFeedModel *)arg1 feedScene:(QZFeedScene *)arg2;
+ (void)updateLikeConfig:(NSMutableDictionary *)arg1 withFeedModel:(QzoneFeedModel *)arg2 isSuperLike:(_Bool)arg3 feedScene:(QZFeedScene *)arg4;
+ (NSDictionary *)createVisitorAndOperatorZoneDataWithFeedModel:(QzoneFeedModel *)arg1 feedScene:(QZFeedScene *)arg2;
+ (NSDictionary *)createRemarkZoneDataWithFeedModel:(QzoneFeedModel *)arg1 feedScene:(QZFeedScene *)arg2;
+ (void)updateContentZone:(NSMutableDictionary *)arg1 withFeedModel:(QzoneFeedModel *)arg2 force:(_Bool)arg3 feedScene:(QZFeedScene *)arg4;
+ (NSDictionary *)createHeaderZoneDataWithFeedModel:(QzoneFeedModel *)arg1 feedScene:(QZFeedScene *)arg2;
+ (NSDictionary *)createTopHeaderZoneDataWithFeedModel:(QzoneFeedModel *)arg1 feedScene:(QZFeedScene *)arg2;
@end

