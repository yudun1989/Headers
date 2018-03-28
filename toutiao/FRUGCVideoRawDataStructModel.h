//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

@class FRUGCVideoActionStructModel, FRUGCVideoPublishReasonStructModel, FRUGCVideoUserStructModel, NSArray, NSNumber, NSString;
@protocol FRImageUrlStructModel><Optional, Optional;

@interface FRUGCVideoRawDataStructModel : JSONModel
{
    NSNumber<Optional> *_item_id;
    NSString<Optional> *_title;
    NSNumber<Optional> *_create_time;
    NSString<Optional> *_app_schema;
    NSString<Optional> *_detail_schema;
    FRUGCVideoUserStructModel<Optional> *_user;
    FRUGCVideoActionStructModel<Optional> *_action;
    FRUGCVideoPublishReasonStructModel<Optional> *_publish_reason;
    NSArray<FRImageUrlStructModel><Optional> *_thumb_image_list;
    NSArray<FRImageUrlStructModel><Optional> *_large_image_list;
}

@property(retain, nonatomic) NSArray<FRImageUrlStructModel><Optional> *large_image_list; // @synthesize large_image_list=_large_image_list;
@property(retain, nonatomic) NSArray<FRImageUrlStructModel><Optional> *thumb_image_list; // @synthesize thumb_image_list=_thumb_image_list;
@property(retain, nonatomic) FRUGCVideoPublishReasonStructModel<Optional> *publish_reason; // @synthesize publish_reason=_publish_reason;
@property(retain, nonatomic) FRUGCVideoActionStructModel<Optional> *action; // @synthesize action=_action;
@property(retain, nonatomic) FRUGCVideoUserStructModel<Optional> *user; // @synthesize user=_user;
@property(retain, nonatomic) NSString<Optional> *detail_schema; // @synthesize detail_schema=_detail_schema;
@property(retain, nonatomic) NSString<Optional> *app_schema; // @synthesize app_schema=_app_schema;
@property(retain, nonatomic) NSNumber<Optional> *create_time; // @synthesize create_time=_create_time;
@property(retain, nonatomic) NSString<Optional> *title; // @synthesize title=_title;
@property(retain, nonatomic) NSNumber<Optional> *item_id; // @synthesize item_id=_item_id;
- (void).cxx_destruct;
- (void)reset;
- (id)init;

@end

