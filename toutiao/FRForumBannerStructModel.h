//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

@class FRForumItemStructModel, FRImageUrlStructModel, NSString;
@protocol Optional;

@interface FRForumBannerStructModel : JSONModel
{
    FRForumItemStructModel<Optional> *_forum_info;
    FRImageUrlStructModel *_banner_imglist;
    NSString *_banner_header_name;
    NSString *_jump_url;
}

@property(retain, nonatomic) NSString *jump_url; // @synthesize jump_url=_jump_url;
@property(retain, nonatomic) NSString *banner_header_name; // @synthesize banner_header_name=_banner_header_name;
@property(retain, nonatomic) FRImageUrlStructModel *banner_imglist; // @synthesize banner_imglist=_banner_imglist;
@property(retain, nonatomic) FRForumItemStructModel<Optional> *forum_info; // @synthesize forum_info=_forum_info;
- (void).cxx_destruct;
- (void)reset;
- (id)init;

@end

