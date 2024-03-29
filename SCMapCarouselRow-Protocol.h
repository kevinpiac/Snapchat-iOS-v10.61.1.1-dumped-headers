//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString, UICollectionViewCell;
@protocol SCMapCarouselRowHeightUpdatesObserver;

@protocol SCMapCarouselRow <NSObject>
- (Class)cellClass;
- (double)heightForWidth:(double)arg1;
- (NSString *)reuseIdentifier;
- (void)updateCell:(UICollectionViewCell *)arg1;

@optional
- (void)didEndDisplayingCell:(UICollectionViewCell *)arg1;
@property(nonatomic) __weak id <SCMapCarouselRowHeightUpdatesObserver> heightUpdatesObserver;
- (NSArray *)internalScrollLandingPositionOffsetsForWidth:(double)arg1;
- (void)setContentHidden:(_Bool)arg1;
@end

