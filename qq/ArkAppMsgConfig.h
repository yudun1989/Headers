//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSNumber, NSString;

@interface ArkAppMsgConfig : NSObject
{
    NSNumber *_round;
    NSNumber *_forward;
    NSNumber *_autoSize;
    NSNumber *_showSender;
    NSString *_type;
}

@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) NSNumber *showSender; // @synthesize showSender=_showSender;
@property(retain, nonatomic) NSNumber *autoSize; // @synthesize autoSize=_autoSize;
@property(retain, nonatomic) NSNumber *forward; // @synthesize forward=_forward;
@property(retain, nonatomic) NSNumber *round; // @synthesize round=_round;
- (void).cxx_destruct;
- (_Bool)fromString:(id)arg1;
- (id)toString;
- (_Bool)fromJson:(id)arg1;
- (id)toJson;

@end

