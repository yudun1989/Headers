//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSData, NSString;

@interface DTMediaMessage : NSObject <NSCoding>
{
    long long _messageType;
    NSString *_title;
    NSString *_messageDescription;
    NSData *_thumbData;
    NSString *_thumbURL;
    id _mediaObject;
}

@property(retain, nonatomic) id mediaObject; // @synthesize mediaObject=_mediaObject;
@property(copy, nonatomic) NSString *thumbURL; // @synthesize thumbURL=_thumbURL;
@property(retain, nonatomic) NSData *thumbData; // @synthesize thumbData=_thumbData;
@property(copy, nonatomic) NSString *messageDescription; // @synthesize messageDescription=_messageDescription;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (_Bool)checkMessage;
- (long long)messageType;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end

