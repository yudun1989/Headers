//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GO2OServiceObject.h"

@class NSString;

@interface GO2OShareChannelParam : GO2OServiceObject
{
    _Bool _isDefault;
    NSString *_channel;
    NSString *_title;
    NSString *_desc;
    NSString *_targetUrl;
}

@property(nonatomic) _Bool isDefault; // @synthesize isDefault=_isDefault;
@property(retain, nonatomic) NSString *targetUrl; // @synthesize targetUrl=_targetUrl;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *channel; // @synthesize channel=_channel;
- (void).cxx_destruct;

@end

