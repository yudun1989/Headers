//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class KSAdvFrame, KSPoint, NSString;

@interface KSAdvStatItem : NSObject
{
    KSPoint *_bottomLeft;
    KSPoint *_bottomRight;
    KSPoint *_topLeft;
    KSPoint *_topRight;
    NSString *_bubbleName;
    NSString *_text;
    KSAdvFrame *_frame;
}

@property(retain, nonatomic) KSAdvFrame *frame; // @synthesize frame=_frame;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
@property(retain, nonatomic) NSString *bubbleName; // @synthesize bubbleName=_bubbleName;
@property(retain, nonatomic) KSPoint *topRight; // @synthesize topRight=_topRight;
@property(retain, nonatomic) KSPoint *topLeft; // @synthesize topLeft=_topLeft;
@property(retain, nonatomic) KSPoint *bottomRight; // @synthesize bottomRight=_bottomRight;
@property(retain, nonatomic) KSPoint *bottomLeft; // @synthesize bottomLeft=_bottomLeft;
- (void).cxx_destruct;

@end
