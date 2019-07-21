//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "SCArcadiaDiscoveryCellProtocol-Protocol.h"

@class NSString, SCLensCell, UIImageView, UIView;

@interface SCArcadiaCell : UICollectionViewCell <SCArcadiaDiscoveryCellProtocol>
{
    SCLensCell *_lensCell;
    UIView *_newIndicatorView;
    UIImageView *_selectedIndicatorView;
    NSString *_lensIconUrl;
}

- (void).cxx_destruct;
- (void)fillViewWithLensIcon:(id)arg1 lensStatus:(long long)arg2 lensIconUrl:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)lensIcon;
- (id)lensIconUrl;
- (long long)lensStatus;
- (id)newIndicatorView;
- (void)prepareForReuse;
- (id)selectedIndicatorView;
- (void)setIsNew:(_Bool)arg1;
- (void)setIsSelected:(_Bool)arg1;
- (void)setLensDiscoveryCellInfo:(id)arg1;
- (void)setLensStatus:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

