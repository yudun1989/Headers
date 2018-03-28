//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

@class NSNumber, NSString, TTImageInfosModel;
@protocol Optional;

@interface TSVDownloadPromotionModel : JSONModel
{
    NSString<Optional> *_appDownloadText;
    TTImageInfosModel<Optional> *_coverImage;
    NSNumber<Optional> *_cellStyle;
    NSString<Optional> *_groupSource;
}

+ (id)keyMapper;
@property(copy, nonatomic) NSString<Optional> *groupSource; // @synthesize groupSource=_groupSource;
@property(retain, nonatomic) NSNumber<Optional> *cellStyle; // @synthesize cellStyle=_cellStyle;
@property(retain, nonatomic) TTImageInfosModel<Optional> *coverImage; // @synthesize coverImage=_coverImage;
@property(copy, nonatomic) NSString<Optional> *appDownloadText; // @synthesize appDownloadText=_appDownloadText;
- (void).cxx_destruct;
- (void)setCoverImageWithNSDictionary:(id)arg1;

@end

