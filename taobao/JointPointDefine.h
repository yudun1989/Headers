//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary;

@interface JointPointDefine : NSObject
{
    NSDictionary *_jointPointTypeMapping;
}

+ (Class)fromType:(id)arg1;
+ (id)sharedInstance;
@property(copy, nonatomic) NSDictionary *jointPointTypeMapping; // @synthesize jointPointTypeMapping=_jointPointTypeMapping;
- (void).cxx_destruct;
- (id)init;

@end

