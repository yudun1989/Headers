//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSString, UIViewController;

@interface TabDataItem : NSObject
{
    _Bool _tTipsShow;
    NSString *_tName;
    NSString *_tClass;
    NSString *_tSelImg;
    NSString *_tUnSelImg;
    NSString *_tSelectedSkin;
    unsigned long long _tType;
    UIViewController *_tVC;
    NSDictionary *_tExtraParam;
}

@property(retain, nonatomic) NSDictionary *tExtraParam; // @synthesize tExtraParam=_tExtraParam;
@property(nonatomic) _Bool tTipsShow; // @synthesize tTipsShow=_tTipsShow;
@property(nonatomic) __weak UIViewController *tVC; // @synthesize tVC=_tVC;
@property(nonatomic) unsigned long long tType; // @synthesize tType=_tType;
@property(copy, nonatomic) NSString *tSelectedSkin; // @synthesize tSelectedSkin=_tSelectedSkin;
@property(copy, nonatomic) NSString *tUnSelImg; // @synthesize tUnSelImg=_tUnSelImg;
@property(copy, nonatomic) NSString *tSelImg; // @synthesize tSelImg=_tSelImg;
@property(copy, nonatomic) NSString *tClass; // @synthesize tClass=_tClass;
@property(copy, nonatomic) NSString *tName; // @synthesize tName=_tName;
- (void).cxx_destruct;
- (id)initWithData:(id)arg1;

@end

