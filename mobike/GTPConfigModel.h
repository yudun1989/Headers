//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface GTPConfigModel : NSObject
{
    NSMutableArray *_xfrArray;
    NSString *_phoneUrl;
    NSString *_lbsUrl;
    NSString *_dyncConfigUrl;
}

@property(retain, nonatomic) NSString *dyncConfigUrl; // @synthesize dyncConfigUrl=_dyncConfigUrl;
@property(retain, nonatomic) NSString *lbsUrl; // @synthesize lbsUrl=_lbsUrl;
@property(retain, nonatomic) NSString *phoneUrl; // @synthesize phoneUrl=_phoneUrl;
@property(retain, nonatomic) NSMutableArray *xfrArray; // @synthesize xfrArray=_xfrArray;
- (void).cxx_destruct;

@end

