//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIView;

@interface YGLayout : NSObject
{
    _Bool _ownsYogaNode;
    _Bool _isEnabled;
    _Bool _isIncludedInLayout;
    struct YGNode *_node;
    UIView *_view;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(nonatomic) int alignContent;
@property(nonatomic) int alignItems;
@property(nonatomic) int alignSelf;
- (void)applyLayout;
- (void)applyLayoutPreservingOrigin:(_Bool)arg1;
- (void)applyLayoutPreservingOrigin:(_Bool)arg1 dimensionFlexibility:(long long)arg2;
@property(nonatomic) double aspectRatio;
@property(nonatomic) double borderBottomWidth;
@property(nonatomic) double borderEndWidth;
@property(nonatomic) double borderLeftWidth;
@property(nonatomic) double borderRightWidth;
@property(nonatomic) double borderStartWidth;
@property(nonatomic) double borderTopWidth;
@property(nonatomic) double borderWidth;
@property(nonatomic) struct YGValue bottom;
- (struct CGSize)calculateLayoutWithSize:(struct CGSize)arg1;
- (void)dealloc;
@property(nonatomic) int direction;
@property(nonatomic) int display;
@property(nonatomic) struct YGValue end;
@property(nonatomic) struct YGValue flexBasis;
@property(nonatomic) int flexDirection;
@property(nonatomic) double flexGrow;
@property(nonatomic) double flexShrink;
@property(nonatomic) int flexWrap;
@property(nonatomic) struct YGValue height;
- (id)initWithView:(id)arg1;
- (id)initWithYogaNode:(struct YGNode *)arg1;
@property(readonly, nonatomic) struct CGSize intrinsicSize;
@property(readonly, nonatomic) _Bool isDirty;
@property(nonatomic, setter=setEnabled:) _Bool isEnabled; // @synthesize isEnabled=_isEnabled;
@property(nonatomic, setter=setIncludedInLayout:) _Bool isIncludedInLayout; // @synthesize isIncludedInLayout=_isIncludedInLayout;
@property(readonly, nonatomic) _Bool isLeaf;
@property(nonatomic) int justifyContent;
@property(nonatomic) struct YGValue left;
@property(nonatomic) struct YGValue margin;
@property(nonatomic) struct YGValue marginBottom;
@property(nonatomic) struct YGValue marginEnd;
@property(nonatomic) struct YGValue marginHorizontal;
@property(nonatomic) struct YGValue marginLeft;
@property(nonatomic) struct YGValue marginRight;
@property(nonatomic) struct YGValue marginStart;
@property(nonatomic) struct YGValue marginTop;
@property(nonatomic) struct YGValue marginVertical;
- (void)markDirty;
@property(nonatomic) struct YGValue maxHeight;
@property(nonatomic) struct YGValue maxWidth;
@property(nonatomic) struct YGValue minHeight;
@property(nonatomic) struct YGValue minWidth;
@property(readonly, nonatomic) struct YGNode *node; // @synthesize node=_node;
@property(readonly, nonatomic) unsigned long long numberOfChildren;
@property(nonatomic) int overflow;
@property(nonatomic) struct YGValue padding;
@property(nonatomic) struct YGValue paddingBottom;
@property(nonatomic) struct YGValue paddingEnd;
@property(nonatomic) struct YGValue paddingHorizontal;
@property(nonatomic) struct YGValue paddingLeft;
@property(nonatomic) struct YGValue paddingRight;
@property(nonatomic) struct YGValue paddingStart;
@property(nonatomic) struct YGValue paddingTop;
@property(nonatomic) struct YGValue paddingVertical;
@property(nonatomic) int position;
@property(readonly, nonatomic) int resolvedDirection;
@property(nonatomic) struct YGValue right;
@property(nonatomic) struct YGValue start;
@property(nonatomic) struct YGValue top;
@property(nonatomic) struct YGValue width;
@property(readonly, nonatomic) __weak UIView *view; // @synthesize view=_view;

@end

