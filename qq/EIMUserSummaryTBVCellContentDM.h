//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, UIImage;

@interface EIMUserSummaryTBVCellContentDM : NSObject
{
    _Bool _isAccessory;
    NSString *_strName;
    UIImage *_imgIcon;
    NSString *_strText;
    NSString *_flagName;
    NSString *_detailStr;
}

@property(retain, nonatomic) NSString *detailStr; // @synthesize detailStr=_detailStr;
@property(copy, nonatomic) NSString *flagName; // @synthesize flagName=_flagName;
@property(nonatomic) _Bool isAccessory; // @synthesize isAccessory=_isAccessory;
@property(copy, nonatomic) NSString *strText; // @synthesize strText=_strText;
@property(retain, nonatomic) UIImage *imgIcon; // @synthesize imgIcon=_imgIcon;
@property(copy, nonatomic) NSString *strName; // @synthesize strName=_strName;
- (void)dealloc;

@end

