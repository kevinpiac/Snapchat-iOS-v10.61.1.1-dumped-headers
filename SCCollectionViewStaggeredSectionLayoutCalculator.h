//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCCollectionViewSectionLayoutProviding-Protocol.h"

@class NSString, SCCornerRadii;
@protocol SCCollectionViewSectionLayoutProvidingDataSource;

@interface SCCollectionViewStaggeredSectionLayoutCalculator : NSObject <SCCollectionViewSectionLayoutProviding>
{
    unsigned long long _numberOfColumns;
    id <SCCollectionViewSectionLayoutProvidingDataSource> _dataSource;
    SCCornerRadii *_cornerRadii;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SCCornerRadii *cornerRadii; // @synthesize cornerRadii=_cornerRadii;
@property(nonatomic) __weak id <SCCollectionViewSectionLayoutProvidingDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (id)initWithSectionColumns:(unsigned long long)arg1;
- (id)layoutAttributesForSectionOriginPoint:(struct CGPoint)arg1 sectionWidth:(double)arg2 minimumInteritemSpacing:(double)arg3 numberOfItems:(unsigned long long)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

