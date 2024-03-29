//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString, UICollectionReusableView;
@protocol SCCollectionViewSectionSupplementaryViewProviderDelegate;

@protocol SCCollectionViewSectionSupplementaryViewProviding <NSObject>
- (struct CGSize)referenceSizeForSupplementaryElementOfKind:(NSString *)arg1 atIndexInSection:(unsigned long long)arg2 withWidth:(double)arg3;
@property(readonly, nonatomic) long long sectionHeaderDisplayStrategy;
@property(nonatomic) __weak id <SCCollectionViewSectionSupplementaryViewProviderDelegate> supplementaryViewProviderDelegate;
- (NSDictionary *)viewClassesForSupplementaryViewsByElementKind;
- (UICollectionReusableView *)viewForSupplementaryElementOfKind:(NSString *)arg1 atIndexInSection:(unsigned long long)arg2;
@end

