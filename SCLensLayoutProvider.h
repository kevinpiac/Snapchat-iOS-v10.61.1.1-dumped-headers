//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UICollectionViewFlowLayout;

@interface SCLensLayoutProvider : NSObject
{
    struct CGRect _parenViewFrame;
    double _itemDimension;
    double _selectedItemDimension;
    double _scale;
    double _selectionScale;
    double _collectionViewBottomOffset;
    double _collectionViewHeight;
    NSString *_reusableCellIdentifier;
    double _sponsoredSlugOffset;
    UICollectionViewFlowLayout *_collectionViewFlowLayout;
}

+ (id)cameraLensesLayoutWithParentViewFrame:(struct CGRect)arg1;
+ (id)lensesInTalkV3LayoutWithParentViewFrame:(struct CGRect)arg1;
+ (id)onDemandLensesLayoutWithParentViewFrame:(struct CGRect)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) double collectionViewBottomOffset; // @synthesize collectionViewBottomOffset=_collectionViewBottomOffset;
@property(retain, nonatomic) UICollectionViewFlowLayout *collectionViewFlowLayout; // @synthesize collectionViewFlowLayout=_collectionViewFlowLayout;
@property(readonly, nonatomic) double collectionViewHeight; // @synthesize collectionViewHeight=_collectionViewHeight;
- (id)initWithItemDimension:(double)arg1 selectedItemDimension:(double)arg2 collectionViewReusableIdentifier:(id)arg3 collectionViewBottomOffset:(double)arg4 collectionViewHeight:(double)arg5 parentViewFrame:(struct CGRect)arg6 sponsoredSlugOffset:(double)arg7;
@property(readonly, nonatomic) double itemDimension; // @synthesize itemDimension=_itemDimension;
@property(readonly, copy, nonatomic) NSString *reusableCellIdentifier; // @synthesize reusableCellIdentifier=_reusableCellIdentifier;
@property(readonly, nonatomic) double scale; // @synthesize scale=_scale;
@property(readonly, nonatomic) double selectedItemDimension; // @synthesize selectedItemDimension=_selectedItemDimension;
@property(readonly, nonatomic) double selectionScale; // @synthesize selectionScale=_selectionScale;
@property(readonly, nonatomic) double sponsoredSlugOffset; // @synthesize sponsoredSlugOffset=_sponsoredSlugOffset;

@end

