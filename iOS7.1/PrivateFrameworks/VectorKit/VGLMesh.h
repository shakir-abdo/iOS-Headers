//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <VectorKit/VGLVertexArrayObject.h>

#import "NSCoding.h"

__attribute__((visibility("hidden")))
@interface VGLMesh : VGLVertexArrayObject <NSCoding>
{
}

- (void)drawElementsOfType:(int)arg1 withContext:(id)arg2 offset:(int)arg3 count:(int)arg4;
- (void)drawTrianglesWithContext:(id)arg1 offset:(int)arg2 count:(int)arg3;
- (void)drawWireframeTrianglesWithContext:(id)arg1;
- (void)drawTriangleStripWithContext:(id)arg1;
- (void)drawTrianglesWithContext:(id)arg1;
- (void)drawLinesWithContext:(id)arg1 offset:(int)arg2 count:(int)arg3;
- (void)drawLinesWithContext:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

