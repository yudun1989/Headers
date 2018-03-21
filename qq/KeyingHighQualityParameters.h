//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/KeyingBaseParameters.h>

#import <QQMainProject/NSCopying-Protocol.h>

@interface KeyingHighQualityParameters : KeyingBaseParameters <NSCopying>
{
    float _u_threshold;
    float _u_clipBlack;
    float _u_clipWhite;
}

@property(nonatomic) float u_clipWhite; // @synthesize u_clipWhite=_u_clipWhite;
@property(nonatomic) float u_clipBlack; // @synthesize u_clipBlack=_u_clipBlack;
@property(nonatomic) float u_threshold; // @synthesize u_threshold=_u_threshold;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

