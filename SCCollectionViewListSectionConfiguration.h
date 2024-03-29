//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSValue, SCCollectionViewListSectionExpansionModel, SCSectionKitHeaderModel;
@protocol NSCopying;

@interface SCCollectionViewListSectionConfiguration : NSObject <NSCopying>
{
    _Bool _automaticallyManageRoundedCorners;
    _Bool _automaticallyManageCellSeparators;
    SCSectionKitHeaderModel *_sectionHeaderModel;
    SCCollectionViewListSectionExpansionModel *_expansionModel;
    double _minimumInteritemSpacing;
    NSValue *_sectionInsets;
    NSObject<NSCopying> *_contentDataModel;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool automaticallyManageCellSeparators; // @synthesize automaticallyManageCellSeparators=_automaticallyManageCellSeparators;
@property(readonly, nonatomic) _Bool automaticallyManageRoundedCorners; // @synthesize automaticallyManageRoundedCorners=_automaticallyManageRoundedCorners;
@property(readonly, copy, nonatomic) NSObject<NSCopying> *contentDataModel; // @synthesize contentDataModel=_contentDataModel;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) SCCollectionViewListSectionExpansionModel *expansionModel; // @synthesize expansionModel=_expansionModel;
- (unsigned long long)hash;
- (id)initWithSectionHeaderModel:(id)arg1 expansionModel:(id)arg2 minimumInteritemSpacing:(double)arg3 sectionInsets:(id)arg4 automaticallyManageRoundedCorners:(_Bool)arg5 automaticallyManageCellSeparators:(_Bool)arg6 contentDataModel:(id)arg7;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) double minimumInteritemSpacing; // @synthesize minimumInteritemSpacing=_minimumInteritemSpacing;
@property(readonly, copy, nonatomic) SCSectionKitHeaderModel *sectionHeaderModel; // @synthesize sectionHeaderModel=_sectionHeaderModel;
@property(readonly, copy, nonatomic) NSValue *sectionInsets; // @synthesize sectionInsets=_sectionInsets;

@end

