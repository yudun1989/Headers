//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MCTemplateComponent.h"

#import "NSCoding-Protocol.h"

@class NSString;

@interface MCDecorateFamilyAtmosphereTemplate : MCTemplateComponent <NSCoding>
{
    NSString *_foreImage;
    NSString *_backImage;
    NSString *_color;
}

@property(copy, nonatomic) NSString *color; // @synthesize color=_color;
@property(copy, nonatomic) NSString *backImage; // @synthesize backImage=_backImage;
@property(copy, nonatomic) NSString *foreImage; // @synthesize foreImage=_foreImage;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithDict:(id)arg1;

@end
