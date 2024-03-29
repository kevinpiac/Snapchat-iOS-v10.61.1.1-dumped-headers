//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SCNComposerAttributesBindingContext : NSObject
{
    struct Handle<std::__1::shared_ptr<snap::composer::AttributesBindingContext>, std::__1::shared_ptr<snap::composer::AttributesBindingContext>> _cppRefHandle;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)bindBooleanAttribute:(id)arg1 invalidateLayoutOnChange:(_Bool)arg2 handler:(id)arg3;
- (void)bindBorderAttribute:(id)arg1 invalidateLayoutOnChange:(_Bool)arg2 handler:(id)arg3;
- (void)bindColorAttribute:(id)arg1 invalidateLayoutOnChange:(_Bool)arg2 handler:(id)arg3;
- (void)bindCompositeAttribute:(id)arg1 parts:(id)arg2 handler:(id)arg3;
- (void)bindDoubleAttribute:(id)arg1 invalidateLayoutOnChange:(_Bool)arg2 handler:(id)arg3;
- (void)bindFlexBoxAttribute:(id)arg1 invalidateLayoutOnChange:(_Bool)arg2 handler:(id)arg3;
- (void)bindIntAttribute:(id)arg1 invalidateLayoutOnChange:(_Bool)arg2 handler:(id)arg3;
- (void)bindPercentAttribute:(id)arg1 invalidateLayoutOnChange:(_Bool)arg2 handler:(id)arg3;
- (void)bindStringAttribute:(id)arg1 invalidateLayoutOnChange:(_Bool)arg2 handler:(id)arg3;
- (void)bindUntypedAttribute:(id)arg1 invalidateLayoutOnChange:(_Bool)arg2 handler:(id)arg3;
- (id)initWithCpp:(const shared_ptr_201911dc *)arg1;
- (void)registerPreprocessor:(id)arg1 preprocessor:(id)arg2;

@end

