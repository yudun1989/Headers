//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface WVObjectProperty : NSObject
{
    NSString *_name;
    NSString *_typeString;
    Class _type;
}

@property(readonly, nonatomic) Class type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSString *typeString; // @synthesize typeString=_typeString;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isNumberType;
- (_Bool)isBOOLType;
@property(readonly, nonatomic) unsigned short typeCode;
- (id)initWithName:(id)arg1 withTypeString:(id)arg2;

@end

