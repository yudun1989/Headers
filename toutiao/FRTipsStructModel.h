//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

@class NSNumber, NSString;

@interface FRTipsStructModel : JSONModel
{
    NSString *_display_info;
    NSNumber *_display_duration;
    NSString *_click_url;
}

@property(retain, nonatomic) NSString *click_url; // @synthesize click_url=_click_url;
@property(retain, nonatomic) NSNumber *display_duration; // @synthesize display_duration=_display_duration;
@property(retain, nonatomic) NSString *display_info; // @synthesize display_info=_display_info;
- (void).cxx_destruct;
- (void)reset;
- (id)init;

@end

