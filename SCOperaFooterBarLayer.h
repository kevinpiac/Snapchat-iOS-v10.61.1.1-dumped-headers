//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCOperaLayer-Protocol.h"

@class NSString, SCOperaPage;

@interface SCOperaFooterBarLayer : NSObject <SCOperaLayer>
{
    _Bool _displayColorBar;
    _Bool _displayLoadingIcon;
    SCOperaPage *_page;
    NSString *_colorBarMainTitle;
    NSString *_circleIconImageKey;
}

+ (id)layerWithProperties:(id)arg1 page:(id)arg2;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *circleIconImageKey; // @synthesize circleIconImageKey=_circleIconImageKey;
@property(readonly, copy, nonatomic) NSString *colorBarMainTitle; // @synthesize colorBarMainTitle=_colorBarMainTitle;
@property(readonly, nonatomic) _Bool displayColorBar; // @synthesize displayColorBar=_displayColorBar;
@property(readonly, nonatomic) _Bool displayLoadingIcon; // @synthesize displayLoadingIcon=_displayLoadingIcon;
- (id)initWithProperties:(id)arg1 page:(id)arg2;
- (_Bool)isEqual:(id)arg1;
@property(nonatomic) __weak SCOperaPage *page; // @synthesize page=_page;
- (unsigned long long)type;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

