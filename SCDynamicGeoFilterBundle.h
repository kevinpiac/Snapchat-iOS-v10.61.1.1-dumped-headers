//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCDynamicGeofilterRenderable-Protocol.h"

@class NSMutableDictionary, NSString;

@interface SCDynamicGeoFilterBundle : NSObject <SCDynamicGeofilterRenderable>
{
    NSMutableDictionary *resourceMap;
    NSString *_bundleKey;
}

+ (id)bundleKeyWithTextResource:(id)arg1;
- (void).cxx_destruct;
- (id)_bundleUrl;
@property(readonly, copy, nonatomic) NSString *bundleKey; // @synthesize bundleKey=_bundleKey;
- (void)getUIImagesWithCanvasSize:(struct CGSize)arg1 completion:(CDUnknownBlockType)arg2 contextData:(id)arg3 dynamicContextProperties:(id)arg4 userSession:(id)arg5 displayName:(id)arg6;
- (id)initWithTextResouce:(id)arg1;
- (_Bool)mergeWithBundle:(id)arg1;

@end

