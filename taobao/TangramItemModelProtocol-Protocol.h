//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol TangramItemModelProtocol <NSObject>
@property(nonatomic) struct CGRect itemFrame;
- (NSString *)display;
- (double)marginLeft;
- (double)marginBottom;
- (double)marginRight;
- (double)marginTop;
- (NSString *)reuseIdentifier;
- (struct NSString *)itemType;

@optional
@property(retain, nonatomic) NSString *inLayoutIdentifier;
@property(nonatomic) _Bool innerItemModel;
@property(retain, nonatomic) NSString *layoutIdentifierForLayoutModel;
@property(retain, nonatomic) NSString *muiID;
@property(nonatomic) struct CGRect absRect;
- (NSString *)linkElementClassName;
- (unsigned long long)colspan;
- (NSString *)position;
@end

