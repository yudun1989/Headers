//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface ALBBAddressLabelModel : NSObject
{
    _Bool _isUICData;
    NSString *_title;
    NSString *_tipsURL;
    NSString *_naviURL;
    NSString *_type;
}

@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(nonatomic) _Bool isUICData; // @synthesize isUICData=_isUICData;
@property(copy, nonatomic) NSString *naviURL; // @synthesize naviURL=_naviURL;
@property(copy, nonatomic) NSString *tipsURL; // @synthesize tipsURL=_tipsURL;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;

@end

