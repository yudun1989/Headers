//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface TriggerModel : NSObject
{
    _Bool _isRegister;
    NSDictionary *_triggerdata;
    NSString *_triggerType;
    NSString *_triggerId;
}

+ (id)initTriggerModelByDict:(id)arg1;
@property(nonatomic) _Bool isRegister; // @synthesize isRegister=_isRegister;
@property(retain, nonatomic) NSString *triggerId; // @synthesize triggerId=_triggerId;
@property(retain, nonatomic) NSString *triggerType; // @synthesize triggerType=_triggerType;
@property(retain, nonatomic) NSDictionary *triggerdata; // @synthesize triggerdata=_triggerdata;
- (void).cxx_destruct;

@end

