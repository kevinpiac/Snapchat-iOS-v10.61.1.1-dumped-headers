//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSDictionary, NSMutableArray, NSNumber, NSString;

@interface SCScannableInfo : NSObject
{
    _Bool _hasQuickUrl;
    NSString *_quickUrl;
    NSMutableArray *_quickAddFriendsSelected;
    NSDictionary *_scannableInfoDict;
    int _scanDataVersion;
    NSString *_scannableId;
    NSString *_scannableTitle;
    NSString *_scannableScreenShotTitle;
    NSString *_scanDataId;
    NSString *_scannableImageGcs;
    NSString *_scannableImageSvgLink;
    NSArray *_scannableActions;
    NSDate *_createDate;
    NSNumber *_createDateWithTimeIntervalSince1970;
    NSString *_quickUrlTitle;
    NSString *_quickAdd;
    NSString *_quickAddUsernames;
    NSArray *_quickAddFriends;
    NSDictionary *_scanSnapshotData;
}

+ (double)snapcodeContainerSize;
- (void).cxx_destruct;
- (void)_ensureNonNilObjects;
- (void)_initFromDictionary:(id)arg1;
@property(readonly, nonatomic) NSString *cellMainLabel;
@property(readonly, nonatomic) NSString *cellSecondaryLabel;
@property(copy, nonatomic) NSDate *createDate; // @synthesize createDate=_createDate;
@property(retain, nonatomic) NSNumber *createDateWithTimeIntervalSince1970; // @synthesize createDateWithTimeIntervalSince1970=_createDateWithTimeIntervalSince1970;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithTitle:(id)arg1;
- (_Bool)isQuickAdd;
- (_Bool)isQuickUrl;
@property(retain, nonatomic) NSString *quickAdd; // @synthesize quickAdd=_quickAdd;
@property(retain, nonatomic) NSArray *quickAddFriends; // @synthesize quickAddFriends=_quickAddFriends;
@property(retain, nonatomic) NSString *quickAddUsernames; // @synthesize quickAddUsernames=_quickAddUsernames;
@property(retain, nonatomic) NSString *quickUrl; // @synthesize quickUrl=_quickUrl;
@property(retain, nonatomic) NSString *quickUrlTitle; // @synthesize quickUrlTitle=_quickUrlTitle;
@property(retain, nonatomic) NSString *scanDataId; // @synthesize scanDataId=_scanDataId;
@property(nonatomic) int scanDataVersion; // @synthesize scanDataVersion=_scanDataVersion;
@property(readonly, nonatomic) NSString *scanPageTitle;
@property(retain, nonatomic) NSDictionary *scanSnapshotData; // @synthesize scanSnapshotData=_scanSnapshotData;
@property(readonly, nonatomic) NSArray *scannableActions; // @synthesize scannableActions=_scannableActions;
@property(retain, nonatomic) NSString *scannableId; // @synthesize scannableId=_scannableId;
@property(readonly, nonatomic) NSString *scannableImageGcs; // @synthesize scannableImageGcs=_scannableImageGcs;
@property(readonly, nonatomic) NSString *scannableImageSvgLink; // @synthesize scannableImageSvgLink=_scannableImageSvgLink;
@property(retain, nonatomic) NSString *scannableScreenShotTitle; // @synthesize scannableScreenShotTitle=_scannableScreenShotTitle;
@property(retain, nonatomic) NSString *scannableTitle; // @synthesize scannableTitle=_scannableTitle;
- (void)updateSelectedFriends:(id)arg1;

@end
