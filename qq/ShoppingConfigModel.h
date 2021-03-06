//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSData, NSMutableArray, NSString;

@interface ShoppingConfigModel : NSObject
{
    _Bool shopEnterFlag;
    NSArray *shopTopBanner;
    NSMutableArray *shopDiscovery;
    NSString *mainTitle;
    NSString *mainHeadUrl;
    NSData *mainHeadData;
    NSString *shopLbsUrl;
    NSMutableArray *shopButton;
}

@property(retain, nonatomic) NSMutableArray *shopButton; // @synthesize shopButton;
@property(retain, nonatomic) NSString *shopLbsUrl; // @synthesize shopLbsUrl;
@property(retain, nonatomic) NSData *mainHeadData; // @synthesize mainHeadData;
@property(retain, nonatomic) NSString *mainHeadUrl; // @synthesize mainHeadUrl;
@property(retain, nonatomic) NSString *mainTitle; // @synthesize mainTitle;
@property(retain, nonatomic) NSMutableArray *shopDiscovery; // @synthesize shopDiscovery;
@property(nonatomic) _Bool shopEnterFlag; // @synthesize shopEnterFlag;
@property(retain, nonatomic) NSArray *shopTopBanner; // @synthesize shopTopBanner;
- (id)initWithDic:(id)arg1;
- (void)dealloc;

@end

