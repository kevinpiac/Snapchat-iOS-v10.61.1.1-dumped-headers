//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCCollectionViewSectionSupplementaryViewProviding-Protocol.h"
#import "SCCollectionViewSupplementaryViewModelsConfigurable-Protocol.h"

@class NSDictionary, NSString, SCSectionKitHeaderModel, UIColor;
@protocol SCCollectionViewSectionSupplementaryViewProviderDelegate;

@interface SCSearchQueryStateAwareSupplementaryViewProvider : NSObject <SCCollectionViewSectionSupplementaryViewProviding, SCCollectionViewSupplementaryViewModelsConfigurable>
{
    long long _queryResultState;
    _Bool _canReloadFreshData;
    NSDictionary *_supplementaryViewModels;
    id <SCCollectionViewSectionSupplementaryViewProviderDelegate> _supplementaryViewProviderDelegate;
    SCSectionKitHeaderModel *_sectionHeaderModel;
    UIColor *_sectionHeaderColor;
}

- (void).cxx_destruct;
- (void)_updateSectionHeaderView:(id)arg1;
- (void)_updateSectionHeaderViewIfNeeded;
- (struct CGSize)referenceSizeForSupplementaryElementOfKind:(id)arg1 atIndexInSection:(unsigned long long)arg2 withWidth:(double)arg3;
@property(retain, nonatomic) UIColor *sectionHeaderColor; // @synthesize sectionHeaderColor=_sectionHeaderColor;
@property(readonly, nonatomic) long long sectionHeaderDisplayStrategy;
@property(copy, nonatomic) SCSectionKitHeaderModel *sectionHeaderModel; // @synthesize sectionHeaderModel=_sectionHeaderModel;
@property(copy, nonatomic) NSDictionary *supplementaryViewModels; // @synthesize supplementaryViewModels=_supplementaryViewModels;
@property(nonatomic) __weak id <SCCollectionViewSectionSupplementaryViewProviderDelegate> supplementaryViewProviderDelegate; // @synthesize supplementaryViewProviderDelegate=_supplementaryViewProviderDelegate;
- (void)updateWithQueryResultState:(long long)arg1 canReloadFreshData:(_Bool)arg2;
- (id)viewClassesForSupplementaryViewsByElementKind;
- (id)viewForSupplementaryElementOfKind:(id)arg1 atIndexInSection:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
