//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, SCLens, UIScrollView;
@protocol SCLensCarouselPresenterProtocol;

@protocol SCLensCarouselPresenterDelegate <NSObject>
- (void)lensCarouselPresenter:(id <SCLensCarouselPresenterProtocol>)arg1 didEndDisplayingLens:(SCLens *)arg2;
- (void)lensCarouselPresenter:(id <SCLensCarouselPresenterProtocol>)arg1 didEndScrolling:(UIScrollView *)arg2 atLens:(SCLens *)arg3;
- (void)lensCarouselPresenter:(id <SCLensCarouselPresenterProtocol>)arg1 didScroll:(UIScrollView *)arg2 selectedCellDistance:(double)arg3 selectedLens:(SCLens *)arg4;
- (void)lensCarouselPresenter:(id <SCLensCarouselPresenterProtocol>)arg1 didSelectLens:(SCLens *)arg2 index:(unsigned long long)arg3 originalLensIndex:(unsigned long long)arg4 totalLensesCount:(unsigned long long)arg5;
- (void)lensCarouselPresenter:(id <SCLensCarouselPresenterProtocol>)arg1 didUpdateLensesList:(NSArray *)arg2;
- (_Bool)lensCarouselPresenter:(id <SCLensCarouselPresenterProtocol>)arg1 isLensBeingApplied:(SCLens *)arg2;
- (void)lensCarouselPresenter:(id <SCLensCarouselPresenterProtocol>)arg1 willDisplayLens:(SCLens *)arg2;
@end

