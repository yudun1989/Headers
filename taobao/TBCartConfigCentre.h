//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface TBCartConfigCentre : NSObject
{
    NSMutableDictionary *_configDict;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *configDict; // @synthesize configDict=_configDict;
- (void).cxx_destruct;
- (id)valueInOrangeForPlatformKey:(id)arg1;
- (id)valueForConfigKey:(id)arg1;
- (id)init;

@end
