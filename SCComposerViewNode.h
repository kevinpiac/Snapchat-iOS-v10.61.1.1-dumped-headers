//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary, UIView, YGLayout;

@interface SCComposerViewNode : NSObject
{
    struct shared_ptr<Composer::ViewNode> _viewNode;
    NSMutableDictionary *_retainedObjects;
    NSMutableDictionary *_didFinishLayoutBlocks;
    YGLayout *_yoga;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addCSSClasses:(id)arg1;
@property(readonly, nonatomic) struct SCComposerViewLayout calculatedLayout;
@property(readonly, copy, nonatomic) NSArray *childViewNodes;
@property(readonly, copy, nonatomic) NSArray *childViews;
@property(readonly, nonatomic) struct CGSize childrenDimension;
- (id)debugDescription;
- (void)didApplyLayoutWithAnimator:(id)arg1;
- (id)initWithViewNode:(struct ViewNode *)arg1;
@property(readonly, nonatomic) _Bool isRightToLeft;
- (id)layoutDebugInfo;
- (void)markLayoutDirty;
- (void)removeCSSClasses:(id)arg1;
- (void)removeValueForComposerAttribute:(id)arg1;
@property(readonly, nonatomic) double rtlScrollOffsetX;
- (void)setDidFinishLayoutBlock:(CDUnknownBlockType)arg1 forKey:(id)arg2;
- (void)setRetainedObject:(id)arg1 forKey:(id)arg2;
- (void)setUserDefinedViewport:(struct CGRect)arg1;
- (void)setValue:(id)arg1 forComposerAttribute:(id)arg2;
@property(readonly, nonatomic) __weak UIView *view;
- (struct ViewNode *)viewNode;
@property(readonly, nonatomic) YGLayout *yoga;

@end

