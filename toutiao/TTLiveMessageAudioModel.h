//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSNumber, NSString;

@interface TTLiveMessageAudioModel : NSObject
{
    NSString *_url;
    NSNumber *_length;
    NSString *_audioId;
    NSNumber *_size;
}

@property(retain, nonatomic) NSNumber *size; // @synthesize size=_size;
@property(copy, nonatomic) NSString *audioId; // @synthesize audioId=_audioId;
@property(retain, nonatomic) NSNumber *length; // @synthesize length=_length;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
- (void).cxx_destruct;

@end

