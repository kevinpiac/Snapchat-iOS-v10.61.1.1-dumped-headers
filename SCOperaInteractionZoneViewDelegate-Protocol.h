//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, SCActionModel, SCOperaInteractionZoneView;

@protocol SCOperaInteractionZoneViewDelegate <NSObject>
- (void)didTapInteractionZoneViewTitle:(SCOperaInteractionZoneView *)arg1;
- (void)interactionZoneView:(SCOperaInteractionZoneView *)arg1 didTriggerActionWithActionModel:(SCActionModel *)arg2 tapRelativeLocation:(struct CGPoint)arg3 itemIndex:(long long)arg4;
- (void)interactionZoneView:(SCOperaInteractionZoneView *)arg1 scrolledItemIndexPath:(NSArray *)arg2 endItemActionModel:(SCActionModel *)arg3;
- (void)interactionZoneViewDidStartScrolling:(SCOperaInteractionZoneView *)arg1;
@end

