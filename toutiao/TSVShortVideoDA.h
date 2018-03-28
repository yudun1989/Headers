//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTDataAdapter.h"

@interface TSVShortVideoDA : TTDataAdapter
{
    unsigned long long _listType;
}

+ (id)DAKeyMap;
+ (id)contentDecorationDATransformer;
+ (id)unfollowedTypeDATransformer;
+ (id)followedMutualTypeDATransformer;
+ (id)followedTypeDATransformer;
+ (id)userIdDATransformer;
+ (id)showReadUIDATransformer;
+ (id)forwardButtonTitleDATransformer;
+ (id)commentButtonTitleDATransformer;
+ (id)diggButtonTitleDATransformer;
+ (id)interactionInfoDATransformer;
@property(nonatomic) unsigned long long listType; // @synthesize listType=_listType;
- (long long)videoDuration:(id)arg1;
- (id)recommendReasonRichText:(id)arg1;
- (unsigned long long)singleImageStyle:(id)arg1;
- (id)largeImageList:(id)arg1;
- (id)thumbImageList:(id)arg1;
- (id)contentRichText:(id)arg1;
- (id)topSecondStr:(id)arg1;
- (void)prepareConstMetaData:(id)arg1 viewData:(id)arg2;
- (id)initWithMetaData:(id)arg1;
- (Class)viewDataClass;
- (Class)metaDataClass;

@end

