//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableString;

@interface RavenJSONEncoder : NSObject
{
    NSMutableString *_JSONRepresentation;
}

+ (id)normalizePropertyName:(id)arg1;
+ (id)encoder;
+ (void)initialize;
@property(retain, nonatomic) NSMutableString *JSONRepresentation; // @synthesize JSONRepresentation=_JSONRepresentation;
- (void).cxx_destruct;
- (id)jsonValueFrom:(id)arg1;
- (id)__encodeObject:(id)arg1 level:(int)arg2;
- (id)encodeObject:(id)arg1;
- (void)encodeObject:(id)arg1 ofClass:(Class)arg2 recursive:(_Bool)arg3 level:(int)arg4;
- (void)encodeDictionary:(id)arg1 level:(int)arg2;
- (void)encodeArray:(id)arg1 level:(int)arg2;
- (void)encodeDate:(id)arg1;
- (id)init;

@end

