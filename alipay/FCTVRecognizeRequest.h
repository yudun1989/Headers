//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface FCTVRecognizeRequest : NSObject
{
    double _sampleRate;
    double _delay;
    double _maxDuration;
    NSDictionary *_extraInfo;
    NSString *_bizType;
    NSString *_command;
}

@property(copy, nonatomic) NSString *command; // @synthesize command=_command;
@property(copy, nonatomic) NSString *bizType; // @synthesize bizType=_bizType;
@property(retain, nonatomic) NSDictionary *extraInfo; // @synthesize extraInfo=_extraInfo;
@property(nonatomic) double maxDuration; // @synthesize maxDuration=_maxDuration;
@property(nonatomic) double delay; // @synthesize delay=_delay;
@property(nonatomic) double sampleRate; // @synthesize sampleRate=_sampleRate;
- (void).cxx_destruct;
- (id)description;
- (id)initWithDictionary:(id)arg1;

@end

