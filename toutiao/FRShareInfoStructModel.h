//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

@class FRShareImageUrlStructModel, NSString;
@protocol Optional;

@interface FRShareInfoStructModel : JSONModel
{
    NSString<Optional> *_share_url;
    NSString<Optional> *_share_title;
    NSString<Optional> *_share_desc;
    NSString<Optional> *_share_weibo_desc;
    FRShareImageUrlStructModel<Optional> *_share_cover;
}

@property(retain, nonatomic) FRShareImageUrlStructModel<Optional> *share_cover; // @synthesize share_cover=_share_cover;
@property(retain, nonatomic) NSString<Optional> *share_weibo_desc; // @synthesize share_weibo_desc=_share_weibo_desc;
@property(retain, nonatomic) NSString<Optional> *share_desc; // @synthesize share_desc=_share_desc;
@property(retain, nonatomic) NSString<Optional> *share_title; // @synthesize share_title=_share_title;
@property(retain, nonatomic) NSString<Optional> *share_url; // @synthesize share_url=_share_url;
- (void).cxx_destruct;
- (void)reset;
- (id)init;

@end

