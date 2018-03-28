//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

@class NSNumber, NSString;

@interface FRGroupStructModel : JSONModel
{
    NSNumber *_group_id;
    NSString *_title;
    NSString *_thumb_url;
    long long _media_type;
    NSString *_open_url;
}

@property(retain, nonatomic) NSString *open_url; // @synthesize open_url=_open_url;
@property(nonatomic) long long media_type; // @synthesize media_type=_media_type;
@property(retain, nonatomic) NSString *thumb_url; // @synthesize thumb_url=_thumb_url;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSNumber *group_id; // @synthesize group_id=_group_id;
- (void).cxx_destruct;
- (void)reset;
- (id)init;

@end

