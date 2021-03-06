//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSMutableDictionary, NSNumber, NSString;

@interface MQTTProperties : NSObject
{
    NSNumber *_payloadFormatIndicator;
    NSNumber *_publicationExpiryInterval;
    NSString *_contentType;
    NSString *_responseTopic;
    NSData *_correlationData;
    NSNumber *_subscriptionIdentifier;
    NSNumber *_sessionExpiryInterval;
    NSString *_assignedClientIdentifier;
    NSNumber *_serverKeepAlive;
    NSString *_authMethod;
    NSData *_authData;
    NSNumber *_requestProblemInformation;
    NSNumber *_willDelayInterval;
    NSNumber *_requestResponseInformation;
    NSString *_responseInformation;
    NSString *_serverReference;
    NSString *_reasonString;
    NSNumber *_receiveMaximum;
    NSNumber *_topicAliasMaximum;
    NSNumber *_topicAlias;
    NSNumber *_maximumQoS;
    NSNumber *_retainAvailable;
    NSMutableDictionary *_userProperty;
    NSNumber *_maximumPacketSize;
    NSNumber *_wildcardSubscriptionAvailable;
    NSNumber *_subscriptionIdentifiersAvailable;
    NSNumber *_sharedSubscriptionAvailable;
}

+ (int)variableIntLength:(int)arg1;
+ (id)getBinaryData:(id)arg1;
+ (id)getUtf8String:(id)arg1;
+ (int)getFourByteInt:(id)arg1;
+ (int)getTwoByteInt:(id)arg1;
+ (int)getVariableLength:(id)arg1;
@property(retain, nonatomic) NSNumber *sharedSubscriptionAvailable; // @synthesize sharedSubscriptionAvailable=_sharedSubscriptionAvailable;
@property(retain, nonatomic) NSNumber *subscriptionIdentifiersAvailable; // @synthesize subscriptionIdentifiersAvailable=_subscriptionIdentifiersAvailable;
@property(retain, nonatomic) NSNumber *wildcardSubscriptionAvailable; // @synthesize wildcardSubscriptionAvailable=_wildcardSubscriptionAvailable;
@property(retain, nonatomic) NSNumber *maximumPacketSize; // @synthesize maximumPacketSize=_maximumPacketSize;
@property(retain, nonatomic) NSMutableDictionary *userProperty; // @synthesize userProperty=_userProperty;
@property(retain, nonatomic) NSNumber *retainAvailable; // @synthesize retainAvailable=_retainAvailable;
@property(retain, nonatomic) NSNumber *maximumQoS; // @synthesize maximumQoS=_maximumQoS;
@property(retain, nonatomic) NSNumber *topicAlias; // @synthesize topicAlias=_topicAlias;
@property(retain, nonatomic) NSNumber *topicAliasMaximum; // @synthesize topicAliasMaximum=_topicAliasMaximum;
@property(retain, nonatomic) NSNumber *receiveMaximum; // @synthesize receiveMaximum=_receiveMaximum;
@property(retain, nonatomic) NSString *reasonString; // @synthesize reasonString=_reasonString;
@property(retain, nonatomic) NSString *serverReference; // @synthesize serverReference=_serverReference;
@property(retain, nonatomic) NSString *responseInformation; // @synthesize responseInformation=_responseInformation;
@property(retain, nonatomic) NSNumber *requestResponseInformation; // @synthesize requestResponseInformation=_requestResponseInformation;
@property(retain, nonatomic) NSNumber *willDelayInterval; // @synthesize willDelayInterval=_willDelayInterval;
@property(retain, nonatomic) NSNumber *requestProblemInformation; // @synthesize requestProblemInformation=_requestProblemInformation;
@property(retain, nonatomic) NSData *authData; // @synthesize authData=_authData;
@property(retain, nonatomic) NSString *authMethod; // @synthesize authMethod=_authMethod;
@property(retain, nonatomic) NSNumber *serverKeepAlive; // @synthesize serverKeepAlive=_serverKeepAlive;
@property(retain, nonatomic) NSString *assignedClientIdentifier; // @synthesize assignedClientIdentifier=_assignedClientIdentifier;
@property(retain, nonatomic) NSNumber *sessionExpiryInterval; // @synthesize sessionExpiryInterval=_sessionExpiryInterval;
@property(retain, nonatomic) NSNumber *subscriptionIdentifier; // @synthesize subscriptionIdentifier=_subscriptionIdentifier;
@property(retain, nonatomic) NSData *correlationData; // @synthesize correlationData=_correlationData;
@property(retain, nonatomic) NSString *responseTopic; // @synthesize responseTopic=_responseTopic;
@property(retain, nonatomic) NSString *contentType; // @synthesize contentType=_contentType;
@property(retain, nonatomic) NSNumber *publicationExpiryInterval; // @synthesize publicationExpiryInterval=_publicationExpiryInterval;
@property(retain, nonatomic) NSNumber *payloadFormatIndicator; // @synthesize payloadFormatIndicator=_payloadFormatIndicator;
- (void).cxx_destruct;
- (id)initFromData:(id)arg1;
- (id)init;

@end

